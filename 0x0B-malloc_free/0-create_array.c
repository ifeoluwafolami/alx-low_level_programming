#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars;
 * and initializes it with a specific char.
 * @size: size of array
 * @c: initializes it with a specific char
 * Return: Pointer to array, or Null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size ==  0)
		return (NULL);
	ch = malloc(size * sizeof(c));
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
