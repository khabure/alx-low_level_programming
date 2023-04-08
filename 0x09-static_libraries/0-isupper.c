#include "main.h"

/**
 * _isupper - check if character is upper case
 * @c: the ascii value of the character
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

