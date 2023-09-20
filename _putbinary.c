#include "main.h"

/**
 * _putbinary - converts value to binary and prints it
 * @n: value to be converted
 *
 * Return: binary of @n
 */

int _putbinary(unsigned int n)
{
	long _binary = 0;
	long remainder = 0;
	long digit_position = 1;

	if (n == 0)
		return (putint(0));

	while (n != 0)
	{
		remainder = n % 2;
		n /= 2;
		_binary += remainder * digit_position;
		digit_position *= 10;
	}

	return (putint(_binary));
}

