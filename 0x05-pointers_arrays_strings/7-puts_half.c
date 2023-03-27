#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int length, i, n;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	if ((length % 2) == 1)
	{
		n = (length + 1) / 2;
	}
	else
	{
		n = length / 2;
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
