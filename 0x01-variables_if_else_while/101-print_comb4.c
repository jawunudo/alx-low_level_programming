#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int w, x, y, z;

	for (w = 0; w < 1000; w++)
	{
		x = w / 100;
		y = (w / 10) % 10;
		z = w % 10;

		if (x < y && y < z)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');

			if (w < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
