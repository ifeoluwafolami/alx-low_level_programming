#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Success - 0, Error - 1
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
