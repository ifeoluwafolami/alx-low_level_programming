#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-D array.
 * @width: width of array
 * @height: height of array
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if ((width < 1) || (height < 1))
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}
