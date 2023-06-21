#include <stdio.h>
/**
 * main- d
 * Return:asd
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k 6 j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
		++i;
	}
	printf("%ls\n", sum);
	return (0);
}
