#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @a: string holding the 0's and 1's
 *
 * Return: converted number (Success), otherwise 0
 */

unsigned int binary_to_uint(const char *a)
{
	unsigned int result = 0;

	if (a == NULL)
		return (0);

	while (*a != '\0')
	{
		if (*a == '1' || *a == '0')
		{
			result = (result << 1) + (*a - '0');
		}
		else
		{
			return (0);
		}
		a++;
	}

	return (result);
}
