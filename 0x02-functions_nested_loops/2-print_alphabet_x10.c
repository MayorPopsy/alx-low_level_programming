#include "main.h"
/***
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 *
 * Return: on success 1
 */
void print_alphabet_x10(void)
{
	char i, j;
	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
