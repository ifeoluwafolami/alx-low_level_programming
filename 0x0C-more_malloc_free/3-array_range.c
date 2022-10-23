#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value of number list
 * @max: maximum value of number list
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i, j, min1 = min, max1 = max;
	int *intsar;

	i = max - min;
	if (i < 0)
		return (NULL);
	intsar = malloc((i + 1) * sizeof(int));
	if (intsar == NULL)
		return (NULL);
	for (j = 0; min1 <= max1; j++)
	{
		intsar[j] = min1;
		min1++;
	}
	return (intsar);
}
