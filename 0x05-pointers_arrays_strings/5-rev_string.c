#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char s1, s2;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i -= 1;
	while (i > j)
	{
		s1 = s[j];
		s2 = s[i];
		s[j] = s2;
		s[i] = s1;
		i--;
		j++;
	}
}
