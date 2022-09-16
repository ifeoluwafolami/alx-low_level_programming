#include "main.h"
/**
 * more_numbers - prints the digits 0-14 ten times,
 * followed by a new line.
 * Return: 1 if success; -1 if error.
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}
}
