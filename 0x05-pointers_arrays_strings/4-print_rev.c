#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (j -= 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
