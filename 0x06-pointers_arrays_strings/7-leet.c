#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @a: string
 * Return: encoded string.
 */
char *leet(char *a)
{
	int i = 0, j;
	char leet[] = "oOlLeEaAtT";
	char l33t[] = "0011334477";

	while (a[i] != '\0')
	{
		j = 0;
		while (leet[j] != '\0')
		{
			if (a[i] == leet[j])
			{
				a[i] = l33t[j];
			}
			j++;
		}
		i++;
	}
	return (a);
}
