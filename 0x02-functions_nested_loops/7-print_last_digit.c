#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n *= -1;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
