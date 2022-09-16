#include "main.h"
/**
 * print_triangle - prints a triangle, follwed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int space, hash;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (space = 1; space <= size; space++)
			{
				if (space <= (size - hash))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
