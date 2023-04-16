#include "main.h"
/**
 * _isalpha - checks for alphaetic character
 * @c: ASCII Equivalent of letter
 * Return: 1 if found, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
