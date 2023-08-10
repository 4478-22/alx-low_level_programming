#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;

	if (n > len2)
	{
	n = len2;
	}

	unsigned int total_length = len1 + n;

	char *concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
	{
	return (NULL);
	}

	strcpy(concatenated, s1);

	strncat(concatenated, s2, n);

	concatenated[total_length] = '\0';

	return (concatenated);
}
