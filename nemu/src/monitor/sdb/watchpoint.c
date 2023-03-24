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

#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
//从free_中取出一个WP，加入到head中
WP* new_wp(){
    WP *p;
    p = free_;
    free_ = free_->next;
    p->next = NULL;
    if (head == NULL){
        head = p;
    }
    else{
        WP *q = head;
        while (q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
    return p;
}

//将wp从head中删除，加入到free_中
void free_wp(WP *wp){
    WP *p = head;
    if(head == NULL){
        printf("No watchpoint!\n");
        assert(0);
    }
    else if (head == wp){
        head = head->next;
    }
    else{
        while (p->next != wp && p->next != NULL){
            p = p->next;
        }
        p->next = wp->next;
    }
    wp->next = free_;
    free_ = wp;
    wp->result = 0;
	  wp->expr[0] = '\0';
}

bool checkWP(){
  bool check = false;
  bool *success = false;
  WP *temp = head;
  int expr_temp;
  while (temp != NULL){
    expr_temp = expr(temp->expr, success);
    if (expr_temp != temp->result){
      check = true;
      printf("触发监视点%d: %s\n", temp->NO, temp->expr);
      temp = temp->next;
      continue;
    }
    printf("Watchpoint %d: %s\n", temp->NO, temp->expr);
    printf("Old value = %d\n", temp->result);
    printf("New value = %d\n", expr_temp);
    temp = temp->next;
  }
  return check;
}
//打印所有使用中的监视点
void printWP(){
  WP *temp = head;
  if (temp == NULL){
    printf("No watchpoint!\n");
    return;
  }
  while (temp != NULL){
    printf("Watchpoint %d: %s\n", temp->NO, temp->expr);
    temp = temp->next;
  }
}
//删除监视点num
void deleteWP(int num){
  WP *temp = head;
  if (temp == NULL){
    printf("No watchpoint!\n");
    return;
  }
  while (temp != NULL){
    if (temp->NO == num){
      free_wp(temp);
      return;
    }
    temp = temp->next;
  }
  printf("No watchpoint %d!\n", num);
}


