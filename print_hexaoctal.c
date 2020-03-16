#include "holberton.h"

/**
 * convert - convert a number into other base
 * @num: string to print
 * @base: base to convert
 *
 * Return: pointer to
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static const char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * convert2 - convert a number into other base
 * @num: string to print
 * @base: base to convert
 *
 * Return: pointer to
 */
char *convert2(unsigned int num, int base)
{
	static const char Representation[] = "0123456789abcdef";
	static const char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
