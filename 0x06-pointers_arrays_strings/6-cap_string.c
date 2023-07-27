#include "main.h"
/**
 * is_separator - this function checks for operators after defining
 * @c: the character to be checked
 *
 * Return: 1 if the character is a separator, otherwise 0.
*/
int is_separator(char c)
{
	int i;

	/* define the list of operators */
	const char separators[] = " \t\n,;.!?\"(){}";

	/* check if the character is in the separators list */
	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1); /* If its a separator */
		}
	}
	return (0); /* its not a separator */

}
/**
 * cap_string - Capitalizes the first letter of each word
 * @str: The input string
 *
 * Return: A pointer to the modified string
*/
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first character */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	/* loop through the rest if the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		/* if character is separator and next lowercase, capitalize */
		if (is_separator(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
