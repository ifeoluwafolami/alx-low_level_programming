#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n < 0)
			{
				_putchar('-');
				n *= -1;
			}
			if (n / 100 != 0)
				_putchar(n / 100 + '0');
			if (n / 10 != 0)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (n / 100 != 0)
				_putchar(n / 100 + '0');
			if (n / 10 != 0)
				_putchar (n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
