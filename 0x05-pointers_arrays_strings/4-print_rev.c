#include "main.h"

/**
 * print_rev - A function to print a string in reverse
 * @s: string
 * @i - variable
 * @lenght - variable
 * Return: void
 **/

/* A function to determine the lenght of a string*/

int str_lenght(char *s);

void print_rev(char *s)
{
	int i;
	int lenght;

	lenght = str_lenght(s);
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
