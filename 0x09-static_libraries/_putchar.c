#include <unistd.h>

/**
 * _putchar - Uses write function to print the character a
 * a: The character to be printed
 *
 * Return: On succes, 1.
 * On error, -1 is returned.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
