#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess);
 */
int main(void)
{
	int ones;
	int tens;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1 ; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
