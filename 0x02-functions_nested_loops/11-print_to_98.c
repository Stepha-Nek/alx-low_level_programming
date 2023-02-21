#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 - prints all natural numbers up till 98
 *
 * @n: parameter to be replaces by natural number
 *  Return: Always 0 if  successful
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
