#include <stdio.h>
/**
 * main - prints all possible combinations of single digits
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
