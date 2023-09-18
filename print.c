#include "main.h"

/*
 * _printf - prints any format passed to it
 * @format: string to be printed as well as the format specifier
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...) 
{
    int count = 0;

    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
		case 'i': {
                    int num = va_arg(args, int);;
                    count += putint(num);
                    break;
                }
                case 'c': {
                    char c = va_arg(args, int);
                    _putchar(c);
                    count++;
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char*);
                    while (*str != '\0') {
                        _putchar(*str); 
                        str++;
                        count++;
                    }
                    break;
                }
                case '%':
                    _putchar('%');
                    count++;
                    break;
                default:
                    _putchar('%'); 
                    _putchar(*format);
                    count += 2;
                    break;
            }
        } else {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args); 
    return count;
}

