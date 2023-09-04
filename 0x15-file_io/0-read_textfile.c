#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *         0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t shd;
	ssize_t c;
	ssize_t e;

	shd = open(filename, O_RDONLY);
	if (shd == -1)
	return (0);
	buff = malloc(sizeof(char) * letters);
	e = read(shd, buff, letters);
	c = write(STDOUT_FILENO, buf, e);

	free(buff);
	close(shd);
	return (c);
}
