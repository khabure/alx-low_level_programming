#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Description: 'the program's description'
 *
 * @n: the inputed character
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	
	if (last < 0)
	{
		_putchar(-last + 48);
	} else
	{
		_putchar(last + 48);
	}
	return (last);
}
