#include "main.h"
/**
 * _strncpy - copies a string;
 * but with a maximum number of bytes.
 * @dest: where string is being copied to
 * @src: string being copied
 * @n: maximum bytes or src to be appended.
 * Return: pointer to string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j, k;

	for (j = 0; src[j] != '\0'; j++)
	{
	}
	if (n > j)
	{
		k = 0;

		while (n > 0)
		{
			if (k <= j)
			{
				dest[i] = src[k];
				i++;
				k++;
			}
			else
			{
				i++;
			}
			n--;
		}
		dest[i] = '\0';

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
	return (dest);
}
