#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **nib;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	nib = malloc(sizeof(int *) * height);

	if (nib == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		nib[x] = malloc(sizeof(int) * width);

		if (nib[x] == NULL)
		{
			for (; x >= 0; x--)
				free(nib[x]);

			free(nib);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			nib[x][y] = 0;
	}

	return (nib);
}
