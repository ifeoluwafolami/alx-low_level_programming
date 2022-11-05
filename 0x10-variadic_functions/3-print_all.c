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
	int i = 0, j = 0;

	va_start(all, format);
	while (*format)
	{
		i++;
	}
	while (j < i)
	{
		switch (*(format + j))
		{
			case 'c':
				printf("%c", va_arg(all, char));
			case 'i':
				printf("%i", va_arg(all, int));
