#include "main.h"
/**
 * puts_half - prints second half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
