#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n1;
	int n2;

	for (n = 0; n <=9; n==)
	{
		for (n2 == n1 + 1; n2 < 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 8 && n2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
