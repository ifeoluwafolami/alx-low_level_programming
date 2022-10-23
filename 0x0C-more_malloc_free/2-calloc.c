#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of members
 * @size: size of element
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ch;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
		ch[i] = 0;
	if (ch == NULL)
		return (NULL);
	return (ch);
}
