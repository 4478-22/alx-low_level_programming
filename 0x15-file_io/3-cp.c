#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer for chars to be stored.
 *
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close file descriptor.
 * @fd:  file descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fiyr, tolp, rio, wppl;
	char *buffe;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

		buffe = create_buffer(argv[2]);
		fiyr = open(argv[1], O_RDONLY);
		rio = read(fiyr, buffe, 1024);
		tolp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fiyr == -1 || rio == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffe);
			exit(98);
		}

		wppl = write(tolp, buffe, rio);
		if (tolp == -1 || wppl == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffe);
			exit(99);
		}

		rio = read(fiyr, buffe, 1024);
		tolp = open(argv[2], O_WRONLY | O_APPEND);

	} while (rio > 0);

	free(buffe);
	close_file(fiyr);
	close_file(tolp);

	return (0);
}
