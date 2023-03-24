/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include </home/ljw/Desktop/ysyx-workbench/nemu/src/isa/riscv64/local-include/reg.h>
#include <memory/vaddr.h>

const char *reg[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

enum {
  /* TODO: Add more token types */
  TK_NOTYPE = 256, 
  TK_EQ,
  TK_NUM,
  TK_HEX,
  TK_REG,
  TK_NOTEQ,
  TK_OR,
  TK_AND,
  TK_POINT,
  TK_NEG
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces

  {"\\+", '+'},         // operation
  {"-",'-'},
  {"\\*", '*'},
  {"/",'/'},
  {"\\(", '('},
	{"\\)", ')'},

  {"\\$[a-z0-9$]{1,3}", TK_REG}, // register
  {"0[xX][0-9a-fA-F]+", TK_HEX}, // hex
  {"[0-9]+", TK_NUM},      //NUM

  {"==", TK_EQ},        // equal
  {"!=", TK_NOTEQ},

  {"&&", TK_AND}, // and
  {"\\|\\|", TK_OR}, // or



};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        for(int j = 0; j < 32; j++) tokens[nr_token].str[j] = '\0';//清空字符串

        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;
          case '+':
            tokens[nr_token].type = '+';
						nr_token++;
						break;
          case '-':
						tokens[nr_token].type = '-';
						nr_token++;
						break;
					case '*':
						tokens[nr_token].type = '*';
						nr_token++;
						break;
					case '/':
						tokens[nr_token].type = '/';
						nr_token++;
						break;
          case '(':
            tokens[nr_token].type = '(';
            nr_token++;
            break;
          case ')':
            tokens[nr_token].type = ')';
            nr_token++;
            break;
          case TK_NUM:
            tokens[nr_token].type = TK_NUM;
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						nr_token++;
            break;
          case TK_HEX:
            tokens[nr_token].type = TK_HEX;
            strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
            nr_token++;
            break;
          case TK_REG:
            tokens[nr_token].type = TK_REG;
            strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
            nr_token++;
            break;
          case TK_AND:  
            tokens[nr_token].type = TK_AND;
            nr_token++;
            break;
          case TK_OR:
            tokens[nr_token].type = TK_OR;
            nr_token++;
            break;
          case TK_NOTEQ:
            tokens[nr_token].type = TK_NOTEQ;
            nr_token++;
            break;
          case TK_EQ:
            tokens[nr_token].type = TK_EQ;
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						nr_token++;
            break;
          default: assert(0);
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parenthess(int p,int q){
  int count=0;
  if (tokens[p].type == '(' && tokens[q].type==')'){
    for(int i=p+1;i<q;i++){
      if(tokens[i].type == '(') count++;
      else if(tokens[i].type == ')') count--;
      if(count <0) return false;
    }
    if (count == 0){
      printf("表达式被括号正确包围\n");
      return true;
    }
  }
  return false;
}

int get_operator_priority(int type) {
    switch(type) {
        case TK_OR:
            return 1;
        case TK_AND:
            return 2;
        case TK_EQ:
        case TK_NOTEQ:
            return 3;
        case '+':
        case '-':
            return 4;
        case '*':
        case '/':
            return 5;
        default:
            return -1;  // 如果不是已知的操作符，返回-1表示未知优先级
    }
}


int primary_operator(int p,int q){
  int count = 0;
  int priority = 0;
  int do_op = 0;
  for (int i=p; i<q; i++){
    if(tokens[i].type == '(') count++;
    if(tokens[i].type == ')') count--;
    if(count == 0){
      if(get_operator_priority(tokens[i].type)>priority){
        priority = get_operator_priority(tokens[i].type);
        do_op = i;
      }
    }
  }
  return do_op;
}
word_t eval(int p,int q){
  word_t val1=0;
  word_t val2=0;
  int op=0;
  int op_type=0;
  if (p>q){
    printf("Default evaluation,p=%d,q=%d",p,q);
    assert(0);
  }
  else if (p == q) {
    if(tokens[p].type == TK_NUM)
      return atoi(tokens[p].str);
    else if(tokens[p].type == TK_HEX){
      int i = 2;
      while(tokens[p].str[i]!= 0){
        if(tokens[p].str[i]>='0' && tokens[p].str[i]<='9')
          val1 = val1*16 + tokens[p].str[i] - '0';
        else if(tokens[p].str[i]>='a' && tokens[p].str[i]<='f')
          val1 = val1*16 + tokens[p].str[i] - 'a' + 10;
        else if(tokens[p].str[i]>='A' && tokens[p].str[i]<='F')
          val1 = val1*16 + tokens[p].str[i] - 'A' + 10;
        i++;
      }
      return val1;
    }
    else if(tokens[p].type == TK_REG){
      bool success = false;
      char *reg = tokens[p].str+1;
      return isa_reg_str2val(reg,&success);
    }
    else {
      printf("情况超出考虑范围");
      assert(0);
    }
  }
  else if (check_parenthess(p,q) == true){
    return eval(p+1,q-1);
  }
  else{
    if(tokens[p].type == TK_NEG){
      sscanf(tokens[p+1].str,"%ld",&val1);
      return -val1;
    }
    if (tokens[p].type == TK_REG){
      bool success = false;
      char *reg = tokens[p].str+1;
      return isa_reg_str2val(reg,&success);
    }
    if(tokens[p].type == TK_POINT){
      return vaddr_read(eval(p+1,q),4);
    }
    op = primary_operator(p,q);
    val1 = eval(p,op-1);
    val2 = eval(op+1,q);
    op_type = tokens[op].type;
    switch(op_type){
      case '+':return val1+val2;
      case '-':return val1-val2;
      case '*':return val1*val2;
      case '/':return val1/val2;
      case TK_EQ:return val1==val2;
      case TK_NOTEQ:return val1!=val2;
      case TK_AND:return val1&&val2;
      case TK_OR:return val1||val2;
      default:printf("未匹配");assert(0);
    }

  }
  return 0;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != TK_NUM && tokens[i - 1].type != TK_HEX )) ){
      tokens[i].type = TK_POINT;
      printf("%d处有指针解引用\n",i);
    }
    if (tokens[i].type == '-' && (i == 0 || (tokens[i - 1].type != TK_NUM && tokens[i - 1].type != TK_HEX)) ){
      tokens[i].type = TK_NEG;
      printf("%d处有负号\n",i);
    } 
  }
  return eval(0,nr_token-1);

  return 0;
}
