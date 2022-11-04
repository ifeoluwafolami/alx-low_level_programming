#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numlist;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && i != n && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(numlist, int));
	}
	printf("\n");
}
