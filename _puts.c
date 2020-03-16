#include "holberton.h"

/**
 * _puts - prints a string
 * @str: string to print
 * @sz: pointer to size_f
 *
 * Return: void
 */
void _puts(char *str, int *sz)
{
	int i;

	if (str == (char *)0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		sz[0] += 6;
		return;
	}

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		sz[0]++;
	}
}
