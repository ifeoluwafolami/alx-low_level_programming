#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (j);
}
