#include "main.h"
/**
 * print_square - A function to print a square
 * @size: Function argument
 * @i - Initialized for loop
 * @b - Initialized for loop
 * return: No return value
 */

void print_square(int size)
{
	int i, b;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
