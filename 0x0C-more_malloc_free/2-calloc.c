#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _calloc - allocates a block of memroy for an array
 * @nmemb: number of elements of the array
 * @size: size of each byte
 * Return pointer to the block of memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > (2147483647 / size))
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = 0;
	}

	return (t);
}



/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}


