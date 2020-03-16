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

	if (format == (char *)0)
		return (-1);

	va_start(arg, format);

	i = 0;
	while (format && format[i] != '\0')
	{
		while (format[i] != '%')
		{
			if (format[i] == '\0')
			{
				flag = 1;
				break;
			}
			_putchar(format[i]);
			i++;
			size_f++;
		}
		if (flag)
			break;
		i++;
		if (format[i] == '\0')
			return (-1);
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
		sz[0]++;
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
		_puts(convert(va_arg(arg, unsigned int), 8), sz);
		break;
	case 's':
		_puts(va_arg(arg, char *), sz);
		break;
	case 'x':
		_puts(convert2(va_arg(arg, unsigned int), 16), sz);
		break;
	case 'X':
		_puts(convert(va_arg(arg, unsigned int), 16), sz);
		break;
	case '%':
		_putchar(format[i]);
		sz[0]++;
		break;
	default:
		sz[0] += 2;
		_putchar(format[i - 1]);
		_putchar(format[i]);
	}
}
