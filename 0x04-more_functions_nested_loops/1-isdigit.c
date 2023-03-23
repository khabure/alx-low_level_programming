#include "main.h"

/**
 * _isdigit - check if character is upper case
 * @c: the ascii value of the character
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
