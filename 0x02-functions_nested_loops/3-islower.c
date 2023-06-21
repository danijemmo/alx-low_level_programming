#include "main.h"
/**
 * _islower - check if the inpute is lowercase
 * @c: int variable
 * Return: 1 for lowercase 0 for upercase
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
