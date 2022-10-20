#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int i, j, k, pow;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	j = n;
	pow = 1;
	for (i = 0; j >= 10; i++)
	{
		j /= 10;
		pow *= 10;
	}
	for (; pow >= 1; pow /= 10)
	{
		k = n / (pow);
		_putchar(k + '0');
		n -= (k * (pow));
		i--;
	}
}
