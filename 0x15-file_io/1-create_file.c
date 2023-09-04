#include "main.h"
/**
 * create_file - Creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 (Success), otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fptr, wt, len;

	if (filename == NULL)
		return (-1);
	len = 0;
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/* 0600 file permissions */
	fptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fptr, text_content, len);

	if (fptr == -1 || wt == -1)
		return (-1);

	close(fptr);

	return (1);
}
