#include "main.h"
/**
 * _formatchecker - process each character
 * @format: string to be printed as well as the format specifier
 * @args: variable argument list
 *
 * Return: count of characters
 */
int _formatchecker(const char *format, va_list args)
{
	int count = 0;
	char *str;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
				{
					str = va_arg(args, char*);
					while (*str != '\0')
					{
						count += _putchar(*str);
						str++;
					}
				}
					break;
				case 'i':
					count += putint(va_arg(args, int));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	return (count);
}
