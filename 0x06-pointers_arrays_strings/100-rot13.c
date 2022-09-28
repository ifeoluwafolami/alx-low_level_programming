#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @a: string
 * Return: encoded string.
 */
char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		while ((a[i] >= 'a' && a[i] <= 'z') ||
				(a[i] >= 'A' && a[i] <= 'Z'))
		{
			if ((a[i] >= 'a' && a[i] <= 'm') ||
					(a[i] >= 'A' && a[i] <= 'M'))
			{
				a[i] += 13;
			}
			else
				a[i] -= 13;
			i++;
		}
		i++;
	}
	return (a);
}
