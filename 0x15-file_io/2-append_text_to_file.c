#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: The string to append to the file
 *
 * Return: 1 (Success), otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wt, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wt = write(opn, text_content, len);

	if (wt == -1 || opn == -1)
		return (-1);

	close(opn);
	return (1);
}
