#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads file print to STDOUT.
 * @filename: file to be being read
 * @letters: number of letters to be read
 * Return: o- actual number of bytes read and printed
 * 0 when failed or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *nim;
	ssize_t fux;
	ssize_t o;
	ssize_t h;

	fux = open(filename, O_RDONLY);
	if (fux == -1)
	return (0);
	nim = malloc(sizeof(char) * letters);
	h = read(fux, nim, letters);
	o = write(STDOUT_FILENO, nim, h);

	free(nim);
	close(fux);
	return (o);
}
