#include "main.h"

/**
 * more_numbers - print more numbers
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 140; i = i + 10)
	{
		if (i >= 100)
		{
			_putchar(i / 100);
		}
		if (i >= 10)
		{
			_putchar(i / 10);
		}
		_putchar(i % 10);

	}
}
