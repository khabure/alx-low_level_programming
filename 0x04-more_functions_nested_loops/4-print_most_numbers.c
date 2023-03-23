#include "main.h"

/**
 * print_most_numbers - print most numbers from 0 to 9
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
char str[] = "01356789\n";
int i;

for (i = 0; i <= 8; i++)
{
	_putchar(str[i]);
}
}
