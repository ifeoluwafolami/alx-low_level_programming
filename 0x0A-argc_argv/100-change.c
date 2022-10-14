#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, else 1
 */
int main(int argc, char *argv[])
{
	int money, coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
			coins++;
		}
		else if (money < 25 && money >= 10)
		{
			money -= 10;
			coins++;
		}
		else if (money < 10 && money >= 5)
		{
			money -= 5;
			coins++;
		}
		else if (money < 5 && money >= 2)
		{
			money -= 2;
			coins++;
		}
		else
		{
			money -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
