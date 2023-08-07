#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"


/**
 * prnt_err - prints error message to the output stream
 * @msg: error message
 */ 
void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * print_header - prints the elf header
 * @filename: name of the file
 */
void print_elf_header(const char *filename)
{
int i;
int file = open(filename, O_RDONLY);
    Elf32_Ehdr header;
    if (file == -1) {
        print_error("Could not open file");
    }

    if (read(file, &header, sizeof(header)) != sizeof(header)) {
        print_error("Could not read ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    printf("Magic: ");
    for (i = 0; i < SELFMAG; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\nClass: %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" :
	 "2's complement, big-endian");
    printf("Version: %d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", header.e_type);
    printf("Entry point address: 0x%x\n", header.e_entry);

    close(file);
}

/**
 * main - Entry point to programm
 * @rgc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    print_elf_header(argv[1]);

    return 0;
}
