#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: if successful 1, else -1 and errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
