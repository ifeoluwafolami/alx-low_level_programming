#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100; followed by a new line.
 * Multiples of 3 are replaced by 'Fizz',
 * Multiples of 5 are replaced by 'Buzz',
 * Multiples of both 3 and 5 are replaced by 'FizzBuzz'.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			else
			{
				if (i % 5 == 0)
				{
					printf("Buzz");
				}
				else
					printf("%i", i);
			}
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
