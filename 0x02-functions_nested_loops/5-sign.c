#include "main.h"

/**
 * print_sign - print sign of a number
 *
 * Description: 'the program's description'
 *
 * @n: the inputed character
 * Return: Always a string (Success)
 */

char* print_sign(int n)
{
	if (n > 0)
	{
		return ("+");
	} else if (n < 0)
	{
		return ("-");
	}
	return ("0");
}
