#include <stdio.h>

/**
 * Main - A program that prints its name 
 *@argc: Arguement count 
 *@argv: Arguement variable
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
