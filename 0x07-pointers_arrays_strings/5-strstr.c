#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: string being scanned
 * @needle: substring being matched
 * Return: pointer to beginning of the located substring
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (a);
		}
		needle = b;
		a++;
		haystack = a;
	}
	return (NULL);
}
