#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;
	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: pointer to newly allocated space containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, j, k, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = _strlen(s1);
	j = _strlen(s2);
	if (n >= j)
		n = j;
	k = i + n + 1;
	ch = malloc(sizeof(char) * (k));
	if (ch == NULL)
		return (NULL);
	while (l < (k - 1))
	{
		if (l < i)
			*(ch + l) = *(s1 + l);
		else
			*(ch + l) = *(s2 + l - i);
		l++;
	}
	*(ch + l) = '\0';
	return (ch);
}
