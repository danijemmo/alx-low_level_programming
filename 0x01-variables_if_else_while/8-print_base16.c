#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess);
 */
int main(void)
{
	char c;

	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
