#include "main.h"

/**
 * more_numbers - Prints 10 times the number from 0 t0 14.
 */

void more_numbers(void)
{
	int num, count;
	
	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
