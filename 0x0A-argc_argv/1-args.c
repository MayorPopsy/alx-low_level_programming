#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints number of arguement
 * @argc: number of arguement count
 * @argv: number of variables
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
