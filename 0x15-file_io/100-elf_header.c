#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * main - display info contained in the ELF header
 * @argc: argument count
 * @argv: argument list
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fp;
	Elf64_Ehdr ehdr;
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		exit(98);
	}
	
	fp = fopen(argv[1], "r");
	
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Unable to open file %s\n", argv[1]);
		exit(98);
	}
	
	if (fread(&ehdr, sizeof(ehdr), 1, fp) != 1)
	{
		fprintf(stderr, "Error: Unable to read ELF header from file %s\n", argv[1]);
		fclose(fp);
		exit(98);
	}
	
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
	    ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: File %s is not an ELF file\n", argv[1]);
		fclose(fp);
		exit(98);
	}
	
	printf("ELF Header:\n");
	printf("  Magic:   ");
	
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", ehdr.e_ident[i]);
	}
	
	printf("\n");
	printf("  Class:                             %s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d\n", ehdr.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", ehdr.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", ehdr.e_type);
	printf("  Machine:                           %d\n", ehdr.e_machine);
	printf("  Version:                           %d\n", ehdr.e_version);
	printf("  Entry point address:               %lx\n", ehdr.e_entry);
	
	fclose(fp);
	
	return (EXIT_SUCCESS);
}
