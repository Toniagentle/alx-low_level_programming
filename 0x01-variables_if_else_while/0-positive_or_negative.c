#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tells if a number is positive, negative or zero.
 *
 * Reture: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX | 2;
	if (n > 0)	
	{
		printf("%d is positive\n", n);
	}
	else if (n==0)
	{
		printf("%di is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
