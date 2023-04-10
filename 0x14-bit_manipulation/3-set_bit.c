#include "main.h"
/**
 * set_bit - sets value of integer to 1 at a given index
 * @n: pointer to bit
 * @index: index to be give, beginning from 0
 *
 * Return: --1 for error, -1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);

	return (1);
}
