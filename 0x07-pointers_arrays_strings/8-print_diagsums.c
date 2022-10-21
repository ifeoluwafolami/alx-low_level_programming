#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a
 * square matrix of integers.
 * @a: square matrix
 * @size: number of integers in diagonal
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;

	while (i < (size * size))
	{
		sum1 += a[i];
		i += (size + 1);
	}
	while (j < (size * size))
	{
		if (j != 0)
		{
			sum2 += a[j];
			j += (size - 1);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
