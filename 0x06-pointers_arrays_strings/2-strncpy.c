#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: appends the copied string here
 * @src: source string copied
 * @n: The maximum number of characters to copy.
 * Return: (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Copy characters from src to dest up to nbytes */
	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	/* stop and end with null bytes if n is greater than the lenght of src */
	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}
	return (dest);
}
