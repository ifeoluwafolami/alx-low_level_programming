#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j = 0;
	char *p;

	va_start(all, format);
	while (format)
		i++;
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
			{
				printf("%c", va_arg(all, int));
				break;
			}
			case 'i':
			{
				printf("%i", va_arg(all, int));
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(all, double));
				break;
			}
			case 's':
			{
				p = va_arg(all, char *);
				printf("%s", *p);
				break;
			}
		}
		if (format[j + 1] !=  '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(all);
}
