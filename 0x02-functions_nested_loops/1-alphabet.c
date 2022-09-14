#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 1 if success; -1 if error.
 */
void print_alphabet(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
	_putchar('\n');
}
