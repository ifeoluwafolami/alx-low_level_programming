#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	opr = get_op_func(argv[2]);
	if (!opr)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", opr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
