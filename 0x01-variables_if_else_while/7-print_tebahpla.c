#include <stdio.h>
/**
 * main - print single digit numbers from 0 - 9
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
