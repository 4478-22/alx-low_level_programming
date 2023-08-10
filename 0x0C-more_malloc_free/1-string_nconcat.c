#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2 = s2
	unsigned int len1 = s1

	if s1 == NULL || s2 == NULL
	return (0);

	if n > = len2
	{
	n = len2;
	unsigned int total length = n + len 1;
	char *_nconcat = (char *) malloc((total length + 1) * sizeof(char));
	if _nconcat == NULL
	{
	return (NULL);
	}
	strcpy(_noncat s1);
	strcat(_noncat, s2, n);
	_noncat[total length] = '\0';
	return (_noncat);
	}
}
