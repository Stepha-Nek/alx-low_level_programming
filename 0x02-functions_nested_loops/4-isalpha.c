#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: parameter to be checked
 * Return: Always 0 if not alpnabet, 1  if alphabet is present
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
