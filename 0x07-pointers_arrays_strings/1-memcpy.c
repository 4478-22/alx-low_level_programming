#include "main.h"

/**
 *_memcpy- copies memory area
 *@dest: memory area to be filled
 *@src: char to copy
 *@n: number of times to copy src
 *
 *Return: pointer to the memory area dest
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
