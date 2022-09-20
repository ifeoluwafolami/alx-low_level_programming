#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, j = 0, k;
	char t;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	k = i / 2;
	while (k--)
	{
		t = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = t;
		j++;
	}
}
