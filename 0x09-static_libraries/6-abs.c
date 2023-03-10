#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @p: argument to be checked
 * Return: 1 for absolute value
 */
int _abs(int p)
{
	if (p < 0)
	{
		return (p * (-1));
	}
	else
	{
		return (p);
	}
}
