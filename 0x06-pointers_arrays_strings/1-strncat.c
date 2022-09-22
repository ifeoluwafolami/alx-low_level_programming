#include "main.h"
/**
 * _strncat - concatenates two strings;
 * but with a maximum number of bytes.
 * @dest: string being appended to
 * @src: string being appended.
 * @n: maximum bytes or src to be appended.
 * Return: pointer to string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	if (n > j)
	{
		for (k = 0; src[k] != '\0'; k++)
			{
				dest[i] = src[k];
				i++;
			}
	}
	else
	{
		k = 0;

		while (n > 0)
		{
			dest[i] = src[k];
			i++;
			k++;
			n--;
		}
	}

	dest[i] = '\0';
	return (dest);
}
