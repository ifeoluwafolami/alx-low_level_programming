#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, b, c;

	if (n % 2 == 1)
	{
		i = n / 2;
		for (j = 1; (i - j) >= 0; j++)
		{
			b = a[i - j];
			c = a[i + j];
			a[i - j] = c;
			a[i + j] = b;
		}
	}
	else
	{
		i = n / 2;
		for (j = 1; (i - j) >= 0; j++)
		{
			b = a[i + (j - 1)];
			c = a[i - j];
			a[i - j] = b;
			a[i + (j - 1)] = c;
		}
	}
}
