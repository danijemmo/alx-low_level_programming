#include "main.h"
/**
 * _isalpha - check if the inpute is lowercase
 * @c: int variable
 * Return: 1 for lowercase and upercase 0 another charctor
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
