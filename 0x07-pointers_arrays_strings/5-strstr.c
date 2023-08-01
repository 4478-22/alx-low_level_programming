#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle);
{
	int r;

	if (needle == 0)
		return (haystack);
	while (*haystack)
	{
		r = 0;
		if (haystack[r] == needle[r])
		{
			do {
				if (needle[r + 1] == '\0')
					return (haystack);
				r++;
			} while (haystack[r] == needle[r]);
		}
		haystack++
	}
	return ('\0');
}
