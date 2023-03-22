#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times in lowercase
 */
void print_alphabet_x10(void)
{
	char alph_low[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j != 10; j++)
	{
		for (i = 0; alph_low[i] != '\0'; i++)
			_putchar(alph_low[i]);
	}
	_putchar('\n');
}
