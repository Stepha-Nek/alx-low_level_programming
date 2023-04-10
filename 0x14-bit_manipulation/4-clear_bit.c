#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: value of bit
 * @index: index given
 *
 * Return: - -1 if not successful, -1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
