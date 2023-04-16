#include "main.h"
/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 * Return: dest string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
