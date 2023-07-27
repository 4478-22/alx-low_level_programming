#include "main.h"
/**
 * _strcat - This program concatenates two strings
 * @src: first string which will be appended to the second.
 * @dest: second string which the first will be appended to.
 *
 * Return: char (dest)
*/
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* append the characters of src to dest */
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* add the terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
