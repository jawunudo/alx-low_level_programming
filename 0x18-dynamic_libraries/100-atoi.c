#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int tot = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			tot = tot * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		tot = (-tot);

	return (tot);
}
