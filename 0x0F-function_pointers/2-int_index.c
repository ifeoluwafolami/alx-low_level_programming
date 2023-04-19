#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
