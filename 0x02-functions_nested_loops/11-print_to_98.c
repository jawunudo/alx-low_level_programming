#include <stdio.h>
/**
 * print_to_98 - prints given number in ascending order to number 98
 * @n: number to begin counting at
 *
 * Return: number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
