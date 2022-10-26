#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string
 *
 * Return: void
 **/
void rev_string(char *s)
{
	int length = 0, i = 0;
	char x;

	while (s[length] !=  '\0')
	{
		length++;
	}

	while (i < length--)
	{
		x = s[i];
		s[i++] = s[length];
		s[length] = x;
	}
}
