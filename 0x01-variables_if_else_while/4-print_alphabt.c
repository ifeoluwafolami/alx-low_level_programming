#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		if ((ch[i] == 'q') || (ch[i] == 'e'))
			;
		else
			putchar(ch[i]);
	putchar('\n');
	return (0);
}
