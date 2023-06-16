#include<stdio.h>

/**
 *main - Entry point 
 * 
 *  Return: Always 0 (sucess); 
 */ 
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	
	return (0);
}
