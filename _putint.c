#include "main.h"
/**
 * putint - prints integer passed
 * @num: number to be printed
 *
 * Return: number of digits in the number
 */
int putint(int num)
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

