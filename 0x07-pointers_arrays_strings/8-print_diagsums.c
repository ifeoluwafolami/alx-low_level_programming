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
		if (i == 0)
			sum1 += *(a + i);
		i += (size + 1);
		sum1 += *(a + i);
	}
	while (j < (size * size))
	{
		j += (size - 1);
		if (j != 0 && j != ((size * size) - 1))
		{
			sum2 += *(a + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
