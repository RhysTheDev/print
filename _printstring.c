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
