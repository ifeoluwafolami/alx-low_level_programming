#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i != j) && (j > i))
			{
				putchar(nums[i] + '0');
				putchar(nums[j] + '0');
				if (!((nums[i] == 8) && (nums[j] == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
