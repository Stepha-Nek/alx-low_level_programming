# include <stdio.h>
/**
 * main - printing digits as  characters
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
