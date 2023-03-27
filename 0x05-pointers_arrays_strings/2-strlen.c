#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	return (j);
}
