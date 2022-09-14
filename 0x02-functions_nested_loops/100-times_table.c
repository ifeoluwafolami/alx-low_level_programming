#include "main.h"
/**
 * print_times_table - prints the time table of an integer n,
 * starting with 0
 * @n: integer being processed
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, prod;

	if ((n < 0) || (n > 15))
	{
		;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (prod >= 10)
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(prod + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
	}
}
