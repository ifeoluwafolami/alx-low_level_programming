#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int i, j = n, k, l, pow;

	if (n < 0)
	{
		_putchar('-');
		j *= -1;
	}
	for (i = 0; j >= 10; i++)
		j /= 10;
	if (n < 0)
		j = -n;
	else
		j = n;
	while (i >= 0)
	{
		l = i;
		pow = 1;
		for (; l > 0; l--)
			pow *= 10;
		k = j / pow;
		_putchar(k + '0');
		j -= (k * pow);
		i--;
	}
}
