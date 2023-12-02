#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - Print ELF header information
 * @ehdr: Pointer to ELF header structure
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i)
        printf("%02x%c", ehdr->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');

    printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "");
    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "");
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" : "");
    printf("  Entry point address:               %#lx\n", (unsigned long)ehdr->e_entry);
}

/**
 * main - Display ELF header information
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 98 on failure, 0 on success
 */
int main(int argc, char **argv)
{
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2)
        dprintf(2, "Usage: %s elf_filename\n", argv[0]), exit(98);

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
        dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

    print_elf_header(&ehdr);

    if (close(fd) == -1)
        dprintf(2, "Error: Can't close fd %d\n", fd), exit(100);

    return (0);
}

