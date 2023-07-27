#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: this is the first string
 * @s2: this is the second string
 * Return: *s1 - *s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
