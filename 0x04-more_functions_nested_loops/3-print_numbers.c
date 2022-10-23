#include "main.h"

/**
 * print_numbers - Prints the number from 0 to 9
 * followed by a new line
 *
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	if (n >= '0' && n <= '9')
	{
		_putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
