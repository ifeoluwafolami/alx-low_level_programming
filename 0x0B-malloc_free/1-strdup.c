#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: the string
 * Return: NULL if str = NULL; else pointer.
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ch = malloc(sizeof(char) * (i + 1));
	if (ch == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		ch[j] = *(str + j);
	}
	return (ch);
}
