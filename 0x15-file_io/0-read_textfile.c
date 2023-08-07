#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints its content to print to STDOUT
 * @filename: text file to be read from
 * @letters: number of letters to be read
 * Return: The  number of bytes the programm could read
 * and printed (Success), otherwise 0 when function fails
 * or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fptr;
	ssize_t wt;
	ssize_t rd;
	char *buffer;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fptr, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fptr);
	return (wt);
}
