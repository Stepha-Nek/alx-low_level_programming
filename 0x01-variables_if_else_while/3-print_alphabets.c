#include <stdio.h>
/**
 * main - Executes the characters in lower and higher case
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
