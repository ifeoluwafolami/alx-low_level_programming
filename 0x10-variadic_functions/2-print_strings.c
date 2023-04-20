#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: the numbe rof strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list slist;
	unsigned int i;
	char *s;

	va_start(slist, n);
	
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);

		s = va_arg(slist, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(slist);
}
