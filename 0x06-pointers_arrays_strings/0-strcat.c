#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @src: String to add
 * @dest: string to append to
 *
 * Return: pointer to the resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
