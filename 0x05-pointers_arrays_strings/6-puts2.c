#include "main.h"

/**
 * puts2 - a function that prints every other character of a string..
 * @str: An input string
 * Return: Nothing
 **/
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;

	len = 1;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
