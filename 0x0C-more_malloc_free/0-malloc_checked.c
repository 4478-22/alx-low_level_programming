#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- main entry
 * @b: number of bytes to allocate
 *
 * Return: a  pointer to the the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *s = malloc(b);
if (s == NULL)
{
exit(98);
}
return (*s);
}
