#include "main.h"

/**
 * _isalpha - checks if character is alphanumeric
 *
 * Description: 'the program's description'
 *
 * @c: the inputed character
 * Return: Always 1 or 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
