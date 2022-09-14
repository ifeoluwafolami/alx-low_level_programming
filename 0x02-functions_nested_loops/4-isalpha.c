#include "main.h"

/**
 * _isalpha - checks for alphabet (lowercase or uppercase)
 * @c: character being analyzed
 * Return: 1 if c is a letter of the alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >=65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
