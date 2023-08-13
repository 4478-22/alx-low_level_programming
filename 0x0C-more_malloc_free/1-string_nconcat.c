#include <stdlib.h>
#include "main.h"

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
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	unsigned int len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	unsigned int concatLen = len1 + ((n >= len2) ? len2 : n);

	char *concatenated = malloc((concatLen + 1) * sizeof(char));

	if (concatenated == NULL)
	return (NULL);

	unsigned int i = 0;

	while (i < len1)
	{
		concatenated[i] = s1[i];
			i++;
	}
	unsigned int j = 0;

	while (j < n && s2[j] != '\0')
	{
		concatenated[i] = s2[j];
			i++;
			j++;
	}

	concatenated[i] = '\0';

	return (concatenated);
}
