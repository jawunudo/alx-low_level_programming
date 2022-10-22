#include "main.h"
/**
 * print_alphabet - Prints alphabets in lower case
 *
 * Return: always 0
 **/

void print_alphabet(void)
{
	char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	_putchar('\n');
}
