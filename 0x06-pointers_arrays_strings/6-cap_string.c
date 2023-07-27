#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Argument to cap
 * Return: always  str
 */
char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
        while (!(str[index] >= 'a' && str[index] <= 'z'))
            index++;

        if (str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n' || str[index - 1] == ',' ||
            str[index - 1] == ';' || str[index - 1] == '.' || str[index - 1] == '!' || str[index - 1] == '?' ||
            str[index - 1] == '"' || str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{' ||
            str[index - 1] == '}' || index == 0)
        {
            str[index] -= 32; /*  Convert to uppercase (ASCII difference between 'a' and 'A') */
        }

        index++;
    }

    return (str);
}
