#include "main.h"

/**
 * _memcpy - a function that copies the memory area
 * @dest: storage location
 * @src: copies memory
 * @n: number of bytes
 *
 * Return: copies memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
