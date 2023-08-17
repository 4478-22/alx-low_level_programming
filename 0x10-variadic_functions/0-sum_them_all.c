#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);

	int sum = 0;
	va_list pet;
	unsigned int i;

	va_start(pet, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pet, int);
	}

	va_end(pet);

	return (sum);
}
