#include <stdio.h>

/**
 * main - prints digts of base sixteen in lower case
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{

		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
