#include "main.h"
/**
 * _printstring - print string
 * @str: string to print
 *
 * Return: int
 */

int _printstring(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		_printstring("(null)");
		return (6);
	}
	else
	{
		while (*str != '\0')
		{
			count += _putchar(*str);
			str++;
		}
	}
	return (count);
}

/**
 * _print_unique_chars - print non printable chars
 * @str: string of unique chars
 *
 * Return: int
 */
int _print_unique_chars(char *str)
{
	int count = 0;
	int i = 0;

	while (i != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar((str[i] >> 4) + '0');
			count += _putchar((str[i] & 0xF) + '0');
		}
		else
			count += _putchar(str[i]);
		i++;
	}
	return (count);
}
