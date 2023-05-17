#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define EI_NIDENT 16

/* ELF header structure */
typedef struct
{
    unsigned char e_ident[EI_NIDENT];
    uint16_t      e_type;
    uint16_t      e_machine;
    uint32_t      e_version;
    uint64_t      e_entry;
    uint64_t      e_phoff;
    uint64_t      e_shoff;
    uint32_t      e_flags;
    uint16_t      e_ehsize;
    uint16_t      e_phentsize;
    uint16_t      e_phnum;
    uint16_t      e_shentsize;
    uint16_t      e_shnum;
    uint16_t      e_shstrndx;
} Elf64_Ehdr;


void print_elf_header(const Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[4])
{
case 1:
printf("ELF32\n");
break;
case 2:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}

printf("  Data:                              ");
switch (header->e_ident[5])
{
case 1:
printf("2's complement, little endian\n");
break;
case 2:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Version:                           %u (current)\n", header->e_version);
printf("  OS/ABI:                            ");
switch (header->e_ident[7])
{
case 0:
printf("UNIX - System V\n");
break;
case 1:
printf("HP-UX\n");
break;
case 2:
printf("NetBSD\n");
break;
case 3:
printf("Linux\n");
break;
case 6:
printf("Solaris\n");
break;
case 9:
printf("FreeBSD\n");
break;
default:
printf("<unknown: %u>\n", header->e_ident[7]);
break;

}
printf("  ABI Version:                       %u\n", header->e_ident[8]);
printf("  Type:                              ");
switch (header->e_type)
{
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
default:
printf("<unknown>\n");
break;
}

printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (1);
}

const char *filename
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
perror("open");
return (98);
}

Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));
if (bytes_read == -1)
X{
perror("read");
close(fd);
return (98);
}

if (bytes_read != sizeof(header))
{
fprintf(stderr, "Failed to read ELF header\n");
close(fd);
return (98);
}

print_elf_header(&header);

close(fd);
return (0);
