#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t shared_offset;
} Finfo;
extern Finfo *finfo;
//size_t ramdisk_read(void *buf, size_t offset, size_t len);
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd = fs_open(filename, 0, 0);
  Elf_Ehdr elf;
  fs_read(fd, &elf, sizeof(Elf_Ehdr));
  finfo->shared_offset += elf.e_phoff;
  assert(*(uint32_t *)elf.e_ident ==0x464c457f);
  Elf_Phdr phdr[elf.e_phnum];
  fs_read(fd, phdr, sizeof(Elf_Phdr) * elf.e_phnum);
  finfo->shared_offset -= elf.e_phoff;
  //ramdisk_read(phdr, elf.e_phoff, sizeof(Elf_Phdr) * elf.e_phnum);
  for(int i = 0; i < elf.e_phnum; i++) {
    if(phdr[i].p_type == PT_LOAD) {
      finfo->shared_offset += phdr[i].p_offset;
      fs_read(fd, (void *)phdr[i].p_vaddr, phdr[i].p_filesz);
      //ramdisk_read((void *)phdr[i].p_vaddr, phdr[i].p_offset, phdr[i].p_memsz);
      memset((void *)(phdr[i].p_vaddr + phdr[i].p_filesz), 0, phdr[i].p_memsz - phdr[i].p_filesz);
    }
  }
  return elf.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

