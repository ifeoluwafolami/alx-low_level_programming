#include "main.h"
/**
 * _strcpy - copies string from src to dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	i += 1;
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
