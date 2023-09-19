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

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar((*str >> 4) + '0');
			count += _putchar((*str & 0xF) + '0');
		}
		else
			count += _putchar(*str);
		str++;
	}
	return (count);
}


/**
 * _print_address_recursive - recursive print address function
 * @address: address of input
 *
 * Return: void
 */
void _print_address_recursive(unsigned long address)
{
	int hexDigit = 0;

	if (address != 0)
	{
		_print_address_recursive(address >> 4);
		hexDigit = address & 0xF;
		_putchar(hexDigit < 10 ? hexDigit + '0' : hexDigit - 10 + 'a');
	}
}

/**
 * _print_address - print address of input
 * @ptr: pointer
 *
 * Return: int
 */
int _print_address(void *ptr)
{
	unsigned long address = (unsigned long)ptr;

	_putchar('0');
	_putchar('x');
	_print_address_recursive(address);
	return (sizeof(void *) * 2 + 2);
}

