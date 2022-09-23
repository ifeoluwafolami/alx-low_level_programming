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
	int i;

	for (i = 0; (src[i] != '\0' && i < n); i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
