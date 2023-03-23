#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
char str[] = "0123456789\n";
int i;

for (i = 0; i <= 10; i++)
{
	_putchar(str[i]);
}
}
