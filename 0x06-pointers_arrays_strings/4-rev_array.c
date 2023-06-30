/**
 * reverse_array - function to reverse an array
 * @a:array
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n;
	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

	}
}
