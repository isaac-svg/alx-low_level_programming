/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
/* union */
union
{
unsigned int a;
unsigned char c[sizeof(unsigned int)];
} endian;

endian.a = 1;
return ((endian.c[0] == 0) ? 0 : 1);
}
