#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1[] = "abcdefghijklmnopqrstuvwxyz";
	char ch2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(ch1[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(ch2[j]);
	}
	putchar('\n');
	return (0);
}
