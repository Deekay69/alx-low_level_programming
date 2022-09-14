#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for alphabetic character
 * @c -charater returned
 * Return: Always success
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
