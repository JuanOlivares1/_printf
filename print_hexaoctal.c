#include "holberton.h"

/**
 * hexaoctal - convert a number into other base
 * @num: number to print
 * @base: base to convert
 * @op: output format option
 *
 * Return: pointer to string of the number to print
 */
char *hexaoctal(unsigned int num, int base, char op)
{
	char upper[] = "0123456789ABCDEF";
	char lower[] = "0123456789abcdef";
	static char buffer[50];
	char *ptr, *ptr2;

	ptr = &buffer[49];
	*ptr = '\0';

	if (op == 'x' || op == 'o')
		ptr2 = lower;
	else
		ptr2 = upper;
	do {
		*--ptr = ptr2[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
