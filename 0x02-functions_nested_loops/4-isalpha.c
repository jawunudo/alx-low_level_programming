#include "main.h"
/**
 * _isalpha -checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 **/

int _isalpha(int c)
{
	if (c <= "aA" && c >= "zZ")
		return (1);
	else
		return(0);
}
