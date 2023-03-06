#include "main.h"
/**
 * _memcpy - Function that copies bytes 
 * @n: Number of bytes
 * @dest: where to copy memory to
 * @src: where to copy memory from
 *
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
