#include "main.h"
/**
 * puts_half - prints half of a string, followed by new line.
 * @str: the string
 */
void puts_half(char *str)
{
	int i, j = 1, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	if (j % 2 != 0)
	{
		half = (j - 1) / 2;
	}
	else
	{
		half = j / 2;
	}


	for (; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
