#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number the counting starts from
 * Return: Always 0 (Success).
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
