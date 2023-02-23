#include <stdio.h>
/**
 * main - Fizz buzz
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int f;
	int b;
	int fb;

	for (i = 1; i <= 100; i++)
	{
		f = i % 3;
		b = i % 5;
		fb = i % 15;

		if (fb == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			printf("\n");
		}
		else if (b == 0)
		{
			printf("Buzz");
			printf(" ");
			printf("\n");
		}
		else if (f == 0)
		{
			printf("Fizz");
			printf(" ");
			printf("\n");
		}
		else
		{
			printf("%i", i);
			printf(" ");
			printf("\n");
		}
	}
	return (0);

}
