#include "main.h"
/**
 * main - Prints alphabets in lower case
 *
 * Return: always 0
 */
void print_alphabet(void);
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
