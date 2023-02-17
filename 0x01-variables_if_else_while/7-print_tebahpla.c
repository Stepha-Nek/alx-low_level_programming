#include <stdio.h>
/**
 *main - prints the alphhabets in reverse
 *
 * Return: Always 0 if suceesful
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
