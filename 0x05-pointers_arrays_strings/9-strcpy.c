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
	int i, j = 1;

	for (i = 0; src[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
