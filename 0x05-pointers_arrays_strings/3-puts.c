#include "main.h"

/**
 * _puts - puts to stdout
 *
 * @str - params
 * Retunr: int
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
