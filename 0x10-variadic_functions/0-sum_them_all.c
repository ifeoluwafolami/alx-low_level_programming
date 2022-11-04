#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first integer
 * Return: 0 if n is 0, else sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumup;
	int s = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(sumup, n);
	for (i = 0; i < n; i++)
		s += va_arg(sumup, int);
	return (s);
}
