#include <stdio.h>
/**
 * main - prints characters of alphabets except q and e
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
