#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
