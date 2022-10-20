#include <stdio.h>
/**
 * main - Prints alphabets A to Z in lower case without e and q
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		do while (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		while (a++ && a <= 'z');
		{
			putchar('\n');
		}
	}
	return (0);
}
