#include "main.h"
/**
 * puts_half - prints half of a string, followed by new line.
 * @str: the string
 */
void puts_half(char *str)
{
	int i, j = 0, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	half = j / 2;
	for (; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
