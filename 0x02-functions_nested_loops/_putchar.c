#include "main.h"
#include <unistd.h>
/**
 * _putchar - write a program to stdout
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
