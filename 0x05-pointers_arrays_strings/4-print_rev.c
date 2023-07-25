#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse
 * Return: 0
*/
void print_rev(char *s)
{
	int lenght = _strlen(s);
	int i;

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
