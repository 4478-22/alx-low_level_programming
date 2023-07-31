#include "main.h"

/**
 * _strchr- locates a character in a string
 * @s: memory location of a character
 * @c: char to be located
 *
 * Return: pointer of char c in the string s, or NULL if not found
 */

char *_strchr(char *s, char c);
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
