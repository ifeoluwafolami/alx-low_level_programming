#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 1; i <= 26; i++)
	{
		putchar(ch[(26 - i)]);
	}
	putchar('\n');
	return (0);
}
