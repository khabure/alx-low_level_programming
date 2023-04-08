#include "main.h"

/**
 * _islower - checks if character is in lower case
 *
 * Description: 'the program's description'
 *
 * @c: the inputed character
 * Return: Always 1 or 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
