#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: the name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
