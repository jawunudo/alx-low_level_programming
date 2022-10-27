i#include "main.h"
/**
 * more_numbers - Prints 10 times the number from 0 to 14
 * @i - variable
 * @a - variable
 * Return - no return value
 **/

void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 = '0');
		}
		_putchar('\n');
	}
}
