#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 1 if success; -1 if error.
 */
void print_alphabet_x10(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alp[i]);
		}
		_putchar('\n');
		j++;
	}
}
