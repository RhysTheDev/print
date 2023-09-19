#include "main.h"
/**
 * putint - prints integer passed
 * @num: number to be printed
 *
 * Return: number of digits in the number
 */
int putint(long num)
{
	int div = 1;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num / div > 9)
		div *= 10;
	while (div > 0)
	{
		_putchar('0' + (num / div));
		count++;
		num %= div;
		div /= 10;
	}
	return (count);
}

/**
 * _put_unsigned_int - prints unsigned number
 * @num: unsigned value
 *
 * Return: int
 */
int _put_unsigned_int(unsigned int num)
{
	int count = 0;
	unsigned int divisor = 1;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num / divisor > 9)
			divisor *= 10;
		while (divisor > 0)
		{
			_putchar('0' + (num / divisor));
			count++;
			num %= divisor;
			divisor /= 10;
		}
	}
	return (count);
}

/**
 * _put_octal - prints octal number
 * @num: octal value
 *
 * Return: int
 */
int _put_octal(unsigned int num)
{
	int count = 0;
	unsigned int octal[100];
	int j = 0;
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			octal[i] = '0' + num % 8;
			num /= 8;
			i++;
		}
		j = i - 1;

		while (j >= 0)
		{
			_putchar(octal[j]);
			count++;
			j--;
		}
	}
	return (count);
}

/**
 * _put_hex - prints hexadecimal number
 * @num: value to be converted
 * @uppercase: bool value
 *
 * Return: int
 */
int _put_hex(unsigned int num, int uppercase)
{
	int count = 0;
	int j = 0;
	char hexDigits[] = "0123456789abcdef";

	if (uppercase)
	{
		hexDigits[10] = 'A';
		hexDigits[11] = 'B';
		hexDigits[12] = 'C';
		hexDigits[13] = 'D';
		hexDigits[14] = 'E';
		hexDigits[15] = 'F';
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char hexString[100];
		int i = 0;

		while (num > 0)
		{
			hexString[i] = hexDigits[num % 16];
			num /= 16;
			i++;
		}
		j = i - 1;

		while (j >= 0)
		{
			_putchar(hexString[j]);
			count++;
			j--;
		}
	}
	return (count);
}
