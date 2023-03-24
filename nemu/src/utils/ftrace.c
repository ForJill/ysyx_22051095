#include <elf.h>
#include <stdlib.h>
#include <stdio.h>

Elf64_Off find_strtab(FILE *fd, Elf64_Shdr shdr, Elf64_Ehdr ehdr){
    int i=0;
    int a=0;
    Elf64_Off str_base = 0;
    for(i = 0; i < ehdr.e_shnum; i++){
        fseek(fd , ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
        a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
        if (a == 0)
            {
              printf("fail to read symbol_entry\n");
              exit(0);
            }
        if(shdr.sh_type == SHT_STRTAB){
            printf("strtab address: %lx\n",shdr.sh_offset);
            str_base = ehdr.e_shoff + i * ehdr.e_shentsize;
            break;
        }
    }
    return str_base;
}

Elf64_Off find_symtab(FILE *fd, Elf64_Shdr shdr, Elf64_Ehdr ehdr){
    int i=0;
    int a=0;
    Elf64_Off sym_base = 0;
    for(i = 0; i < ehdr.e_shnum; i++){
        fseek(fd , ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
        a = fread(&shdr, ehdr.e_shentsize, 1, fd);
        if (a == 0)
            {
              printf("fail to read symbol_entry\n");
              exit(0);
            }
        if(shdr.sh_type == SHT_SYMTAB){
            printf("symtab address: %lx\n",shdr.sh_offset);
            sym_base = ehdr.e_shoff + i * ehdr.e_shentsize;
            break;
        }
    }
    return sym_base;
}