#include "main.h"

/**
 * main - A program that prints alphabet in lowercase
 *
 * Return: On success 1
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
