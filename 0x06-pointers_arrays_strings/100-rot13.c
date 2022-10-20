#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @a: string
 * Return: encoded string.
 */
char *rot13(char *a)
{
	int i, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		j = 0;
		while (alp[j] != '\0')
		{
			if (alp[j] == a[i])
			{
				a[i] = enc[j];
				break;
			}
			j++;
		}
	}
	return (a);
}
