#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character being searched for
 * Return: NULL if character not found,
 * or pointer to first occurrecnce of the character.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s);
	}
	return (NULL);
}
