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
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (
					((i != j) && (i != k) && (j != k)) && ((j > i) && (k > j))
				)
				{
					putchar(nums[i] + '0');
					putchar(nums[j] + '0');
					putchar(nums[k] + '0');
					if (!((nums[i] == 7) && (nums[j] == 8) && (nums[k] == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
