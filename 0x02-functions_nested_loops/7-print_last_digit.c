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
	int i = _abs(n)

	last = i % 10;
	
	_putchar(last + 48);
	
	return (last);
}
