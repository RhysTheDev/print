#include "main.h"
/**
 * rot13 - encode str to rot13
 * @str: string
 *
 * Return: int
 */
int rot13(char *str)
{
	int count = 0;
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i];

		if (c >= 'a' && c <= 'z')
			c = ((c - 'a' + 13) % 26) + 'a';
		else if (c >= 'A' && c <= 'Z')
			c = ((c - 'A' + 13) % 26) + 'A';

		str[i] = c;
		i++;
		count++;
	}
	return (count);
}
