#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cou_nt = 0;
	unsigned long int current;
	unsigned long int ex_clusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = ex_clusive >> i;
		if (current & 1)
			cou_nt++;
	}

	return (cou_nt);
}
