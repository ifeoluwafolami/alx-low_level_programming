#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: address being pointed to
 * @src: pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (j = 1; src [j] != '\0'; j++)
	{
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
