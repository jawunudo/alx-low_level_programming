#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character \ should be printedi
 * @len - initialized for the conditional statement
 * Return: no return value.
 */

void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('\\');
	}

	_putchar('\n');
}
