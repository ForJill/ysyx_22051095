#ifndef __FTRACE_H__
#define __FTRACE_H__
#include <elf.h>
#include <stdio.h>

Elf64_Off find_strtab(FILE *fd, Elf64_Shdr shdr, Elf64_Ehdr ehdr);
Elf64_Off find_symtab(FILE *fd, Elf64_Shdr shdr, Elf64_Ehdr ehdr, Elf64_Sym symdr);

#endif