#include "holberton.h"

/**
 * print_int - prints integers
 * @num: number to print
 *
 * Return: void
 */
void print_int(int num)
{
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}

	if (num / 10)
		print_int(num / 10);
	_putchar('0' + (num % 10));
}

/**
 * print_un_int - prints unsigned integers
 * @num: number to print
 *
 * Return: void
 */
void print_un_int(unsigned int num)
{
	if (num / 10)
		print_int(num / 10);
	_putchar('0' + (num % 10));
}
