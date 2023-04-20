#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
* Return: sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list parameters;

	if (n)
	{
		va_start(parameters, n);
		for (i = 0; i < n; i++)
			sum += va_arg(parameters, int);
		va_end(parameters);
	}
	return (sum);
}
