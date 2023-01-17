#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
	{}

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';

	return (dest);
}
