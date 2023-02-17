#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - zero,Positive or Negative
 *
 * Return: Always 0 (if code is correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	else
	{
		printf("%d is positive\n", n);
	}
	printf("\n");
	return (0);
}
