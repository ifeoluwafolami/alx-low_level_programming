#include <stdio.h>
#include "main.h"
/**
 * multiple_sum - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */
void multiple_sum(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) || (i % 5)) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%i\n", sum);
}
