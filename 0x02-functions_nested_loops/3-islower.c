#include "main.h"
/**
 * _islower - check if the inpute is lowercase
 * c - int variable
 * Reaturn: _islower (1);
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
