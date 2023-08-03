#include <stddef.h>
/**
 * binary_to_uint - converts a binary to an nsigned int
 * @b: string holding the 0's and 1's
 *
 * Retrn: converted number (Success), otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			result = (result << 1) + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (result);
}
