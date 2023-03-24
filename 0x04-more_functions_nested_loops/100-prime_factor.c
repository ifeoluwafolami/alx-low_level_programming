#include <stdio.h>
/**
 * main - calculate largest prime of 612852475143
 * Return: 0 for Success
 */
int main(void)
{
	long int i = 612852475143;
	long int j;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			i /= j;
		}
	}
	printf("%ld\n", i);
	return (0);
}
