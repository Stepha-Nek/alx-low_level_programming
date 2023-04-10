#include "main.h"
/**
 * get_bit - returns value of integer in given index
 * @index: index to be given.
 * @n: value of bit
 *
 * Return: value of index, -1 if not sucessful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return  (0);
	}
	return (1);

}
