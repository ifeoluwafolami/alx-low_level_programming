#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i != size; i++)
		{
			j = size - (i + 1);
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			k = (i + 1);
			while (k > 0)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
