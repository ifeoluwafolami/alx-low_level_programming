#include <stdio.h>
/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143.
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int i= 612852475143;
	long int j;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%ld\n", j);
	return (0);
}
