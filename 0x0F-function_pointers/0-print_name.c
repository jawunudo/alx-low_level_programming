#include <stdlib.h>

/**
 * print_name - print `name' using function `f'
 * @name: string to print
 * @f: function to call with `name' as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
