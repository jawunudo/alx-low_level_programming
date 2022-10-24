#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: function parameter
 * @i - Initialize for while loop
 * @length - Variable for return value.
 * Return: length of string
 **/

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
