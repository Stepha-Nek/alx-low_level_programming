#include "main.h"
/**
 * _islower - function tha checks for lowercase character
 *
 *@c: value to be checked
 * Return: Always 0 if successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
