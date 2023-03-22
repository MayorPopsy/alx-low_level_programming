#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints number of arguement 
 * @argc - number of arguement count 
 * @argv - number of variables
 * Return: 0 success 
 */
int main(int argc, char *argv[])
{
	int i;
	printf("%d\n",argc);
	for(i=1;i<argc;i++)
	{
		printf("%s",argv[i]);
	}
	return 0;
}
