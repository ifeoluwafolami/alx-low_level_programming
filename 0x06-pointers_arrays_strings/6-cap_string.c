#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: string
 * Return: capitalized string
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((i == 0 || a[i - 1] == ' '
		|| a[i - 1] == '\t' || a[i - 1] == '\n'
		|| a[i - 1] == ',' || a[i - 1] == ';'
		|| a[i - 1] == '.' || a[i - 1] == '!'
		|| a[i - 1] == '?' || a[i - 1] == '"'
		|| a[i - 1] == '(' || a[i - 1] == ')'
		|| a[i - 1] == '{' || a[i - 1] == '}')
		&& (a[i] >= 97 && a[i] <= 122))
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
