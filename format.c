#include "main.h"
/**
 * _process_format_char - process each character
 * @format_char: format specifier
 * @args: variable argument list
 *
 * Return: count of characters
 */
int _process_format_char(char format_char, va_list args)
{
	switch (format_char)
	{
		case 'c':
			return (_putchar(va_arg(args, int)));
		case 's':
			return (_printstring(va_arg(args, char*)));
		case 'i':
			return (putint(va_arg(args, int)));
		case '%':
			return (_putchar(('%')));
		default:
			return (0);
	}
}

/**
 * _formatchecker - print format of str
 * @format: format of string
 * @args: variable argument list
 *
 * Return: count
 */
int _formatchecker(const char *format, va_list args)
{
	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += _process_format_char(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	return (count);
}

