#include "main.h"
/**
 * _islower(int c) - check if the inpute is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
}
