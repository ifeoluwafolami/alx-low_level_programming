#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: string printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;

va_start(nums, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(nums, int));
	if (separator != NULL && i != (n - 1))
		printf("%s", separator);
}
putchar('\n');
va_end(nums);
}
