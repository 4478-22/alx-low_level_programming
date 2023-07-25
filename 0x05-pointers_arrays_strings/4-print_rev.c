#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
*/

void print_rev(char *s)
{
	int longi = o;
	int o;

	while (*s != '\0')
	{
		longi++;
	}
	s--;
	for(0=longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
