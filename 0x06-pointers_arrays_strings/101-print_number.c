#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int i, j, k, pow, l;

	if (n < 0)
	{
		_putchar('-');
		l = n * -1;
	}
	else
		l = n;
	j = l;
	pow = 1;
	for (i = 0; j >= 10; i++)
	{
		j /= 10;
		pow *= 10;
	}
	for (; pow >= 1; pow /= 10)
	{
		k = ((l / pow) % 10);
		_putchar(k + '0');
		i--;
	}
}
