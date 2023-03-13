#include <ctype.h>
#include <stdio.h>

/**
 *_isupper - checks if parameter is an uppercase character
 *@c:input character
 *Return: 1-if c is uppercase or 0-otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
