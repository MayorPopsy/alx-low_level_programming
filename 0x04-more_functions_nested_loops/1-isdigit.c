#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - A function that checks for a digit
 * @c:input character
 * Return: 1-if c is a digit or 0-otherwise
 */
int _isdigit(int c)
{
		if (c >= 0 && c <= 9)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
