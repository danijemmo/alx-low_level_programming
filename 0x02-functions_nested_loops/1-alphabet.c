#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0 (sucess);
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
