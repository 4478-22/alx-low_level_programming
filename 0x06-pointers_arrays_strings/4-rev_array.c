#include "main.h"
/**
 * reverse_array - this function reverses the content of an array of integers
 * @a: the pointer to the array of integers
 * @n: represents the number of elements
 * Returns nothing
 *
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
