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
	count = _formatchecker(format, args);

	return (count);
}

