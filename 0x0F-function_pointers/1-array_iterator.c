#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array
 * @size: size of array
 * @action: function to be carried out
 * Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
