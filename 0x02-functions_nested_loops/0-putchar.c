#include "main.h"
/**
 * main - Entry poin
 * t
 * Return: Always 0
 */
int main(void)
{

	char p[] = "_putchar";
	int i = 0;

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
