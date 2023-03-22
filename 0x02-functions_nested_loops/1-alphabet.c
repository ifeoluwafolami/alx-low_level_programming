#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char alph_low[] = 'abcdefghijklmnopqrstuvwxyz';
	int i;

	for (i = 0; alph_low[i] != '\0'; i++)
		_putchar(alph_low[i]);
	_putchar("\n");
}
