#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on a format string.
 * @format: The format string.
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_char;

	va_start(args, format);

	while (format && format[i])
	{
		current_char = format[i];

	if (current_char == 'c')
	{
		printf("%c", va_arg(args, int));
	}
	else if (current_char == 'i')
	{
		printf("%d", va_arg(args, int));
	}
	else if (current_char == 'f')
	{
		printf("%f", va_arg(args, double));
	}
	else if (current_char == 's')
	{
		str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	}

	i++;
	}

	printf("\n");

	va_end(args);

}
