#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -1 if s2 > s1, 1 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
		}
		else
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
}
