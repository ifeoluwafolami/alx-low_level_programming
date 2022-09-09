#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nums[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
		putchar(nums[i]);
	putchar('\n');
	return (0);
}
