#include "main.h"

/**
 * _isupper - checks uppercasee
 * @c:parameter
 * Return: 0 if succesful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
