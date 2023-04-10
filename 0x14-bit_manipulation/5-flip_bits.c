#include "main.h"
/**
 * flip_bits - returns number of bits you will need to flip btw numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits required to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
