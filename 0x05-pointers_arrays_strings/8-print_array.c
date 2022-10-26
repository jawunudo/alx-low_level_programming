#include <stdio.h>
#include "main.h"

/**
 * print_array - print all elements in the array
 * @n: number of elements in the array
 * @a: the array containing the elements
 * Description: to print all elements that are in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
