#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 - 9 with a new line
 */

void print_most_numbers(void)
{
	int i;

	for (i - 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
