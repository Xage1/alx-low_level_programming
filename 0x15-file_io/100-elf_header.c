#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_error - Display an error message and exit.
 * @msg: The error message to display.
 *
 * This function displays the provided error message to stderr and exits the program with status 98.
 */

void display_error(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

/**
 * display_elf_header - Display the information contained in the ELF header.
 * @elf_header: Pointer to the ELF header structure to display.
 *
 * This function displays the information contained in the ELF header structure.
 */

void display_elf_header(const Elf64_Ehdr *elf_header)
{
printf("ELF Header:\n");
printf("  Magic:   %02x %02x %02x %02x\n", elf_header->e_ident[EI_MAG0], elf_header->e_ident[EI_MAG1], elf_header->e_ident[EI_MAG2], elf_header->e_ident[EI_MAG3]);
printf("  Class:                             ");
switch (elf_header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
break;
printf("ELF64\n");
break;
default:
printf("Invalid class\n");
break;
}

printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");

switch (elf_header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
default:
printf("Unknown OS/ABI\n");
break;
}


printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (elf_header->e_type)
{
case ET_NONE:
printf("No file type\n");
break;
case ET_REL:
printf("Relocatable file\n");
break;
case ET_EXEC:
printf("Executable file\n");
break;
case ET_DYN:
printf("Shared object file\n");
break;
case ET_CORE:
printf("Core file\n");
break;
default:
printf("Unknown type\n");
break;
}

printf("  Entry point address:               0x%lx\n", elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always  0.
 */

int main(int argc, char **argv)
{
const char *filename;
Elf64_Ehdr elf_header;
int fd;


if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

filename = argv[1];

fd = open(filename, O_RDONLY);
if (fd == -1)
{
display_error("Error opening file");
}

if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
display_error("Error reading ELF header");
}

if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
display_error("Not an Elf file");
}

display_elf_header(&elf_header);

close(fd);

return (0);
}
