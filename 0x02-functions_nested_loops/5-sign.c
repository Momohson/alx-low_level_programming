#include "main.h"

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 * @n: the int to print
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n == 0)
	{
		return (1);
		_putchar ('0');
	}
	else
	{
		return (0);
		_putchar ('-');
	}
}
