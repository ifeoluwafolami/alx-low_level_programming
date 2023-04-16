#include "main.h"
/**
 * main - prints _putchar
 * Return: Zero
 */
int main(void)
{
	char wd[] = "_putchar";
	int i;

	for (i = 0; wd[i] != '\0'; i++)
		_putchar(wd[i]);
	_putchar('\n');
	return (0);
}
