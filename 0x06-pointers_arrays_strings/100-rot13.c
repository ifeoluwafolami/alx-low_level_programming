#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @n: string
 * Return: encoded string
 */
char *rot13(char *n)
{
	alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	enc[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (n[i] == alp[j])
			{
				n[i] = enc[j];
			}
		}
	}
	return (n);
}
