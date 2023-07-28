#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded strin.
*/
char *leet(char *str)
{
	char leet_map[128] = {0}; /* Initialize the map with 0 */
	char *leet_chars = "aAeEoOtTlL"; /* Letters to be replaced */
	char *leet_replacements = "4433007711"; /* Corresponding replacement */
	int i;

	for (i = 0; leet_chars[i] != '\0'; i++)
	{
		leet_map[(unsigned char)leet_chars[i]] = leet_replacements[i];
	}

	/* Loop through the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* check if the current character needs to be replaced */
		if (leet_map[(unsigned char)str[i]] != 0)
		{
			str[i] = leet_map[(unsigned char)str[i]];
		}
	}
	return (str);
}
