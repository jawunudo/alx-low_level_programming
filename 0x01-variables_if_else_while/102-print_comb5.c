#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j < 100; j++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(32);
			putchar(c + '0');
			putchar(d + '0');
		}

			if (!(a == 9 && b == 8))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
