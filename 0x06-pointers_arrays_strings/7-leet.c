#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j, k;
	char l[] = "oOlLeEaAtT";
	char m[] = "0011334477";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = m[k];
			}
		}
	}
	return (s);
}
