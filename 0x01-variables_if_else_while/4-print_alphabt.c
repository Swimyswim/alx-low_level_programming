#include <stdio.h>

/**
 * main - prints alphabet in lowercase followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++;

	}
	putchar('\n');
	return (0);
}
