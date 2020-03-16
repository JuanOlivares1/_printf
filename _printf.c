#include "holberton.h"

/**
 * _printf - print a string
 * @format: string to print
 *
 * Return: number of characters on stronf
 */
int _printf(const char * const format, ...)
{
	unsigned int i;
	int flag = 0, size_f = 0;
	va_list arg;

	va_start(arg, format);

	for (; format[size_f]; size_f++)
		;

	i = 0;
	while (format && format[i] != '\0')
	{
		while (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			if (format[i] == '\0')
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
		i++;

		printf_aux(arg, format, i, &size_f);

		i++;
	}
	va_end(arg);
	return (size_f);
}

/**
 * printf_aux - looks for special characters and print
 * @arg: va_list args to iterate
 * @format: string to print
 * @i: special character
 * @sz: size of string
 *
 * Return: void
 */
void printf_aux(va_list arg, const char * const format,
		unsigned int i, int *sz)
{
	switch (format[i])
	{
	case 'c':
		_putchar(va_arg(arg, int));
		break;
	case 'd':
		print_int(va_arg(arg, int));
		break;
	case 'i':
		print_int(va_arg(arg, int));
		break;
	case 'u':
		print_un_int(va_arg(arg, unsigned int));
		break;
	case 'o':
		_puts(convert(va_arg(arg, unsigned int), 8));
		break;
	case 's':
		_puts(va_arg(arg, char *));
		break;
	case 'x':
		_puts(convert2(va_arg(arg, unsigned int), 16));
		break;
	case 'X':
		_puts(convert(va_arg(arg, unsigned int), 16));
		break;
	case '%':
		_putchar(format[i]);
		sz[0]--;
		break;
	default:
		_putchar(format[i - 1]);
		_putchar(format[i]);
	}
}
