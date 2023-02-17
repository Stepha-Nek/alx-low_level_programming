#include <stdio.h>
/**
 * main - executes code, a character at a time
 *
 * Return: Always 0 (if successful)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
