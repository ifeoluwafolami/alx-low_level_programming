#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms of the Fibonacci sequence
 * below 4,000,000.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 1, j = 2, sum = 0;

	while (j < 4000000)
	{
		j += i;
		i = j - i;
		if ((j % 2) == 0)
		{
			sum += j;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
