#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 1, j = 2, k;

	for (k = 0; k < 50; k++)
	{
		if (k == 0)
		{
			printf("%ld, ", i);
		}
		else if (k == 1)
		{
			printf("%ld, ", j);
		}
		else
		{
			j += i;
			i = j - i;
			if (k != 49)
			{
				printf("%ld, ", j);
			}
			else
			{
				printf("%ld\n", j);
			}
		}
	}
	return (0);
}
