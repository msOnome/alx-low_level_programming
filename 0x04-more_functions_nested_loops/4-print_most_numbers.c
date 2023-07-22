#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9
 * Description: skips the numbers 2 and 4
 * Return: The numbers 0 to 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i == 2 || i == 4)
	{
	continue;
	}
	else
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}
