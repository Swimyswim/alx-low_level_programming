#include <unistd.h>

/**
 * _putchar - writes the c to stdout
 * @c: The characte to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropraitely.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
