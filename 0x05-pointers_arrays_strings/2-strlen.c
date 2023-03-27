#include "main.h"

/**
 * _strlen - check the code
 * @s: the string to be counted
 * Return: Always 0.
 */

int _strlen(char *s)
{
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

}
