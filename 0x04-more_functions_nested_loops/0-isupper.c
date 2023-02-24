#include <ctype.h>
#include <stdio.h>

/**
 *int _isupper(int c) - A function that checks for uppercase characters 
 *Return: 1-if c is uppercase or 0-otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		
		return (1);
	}
	else 
			return (0);
}

