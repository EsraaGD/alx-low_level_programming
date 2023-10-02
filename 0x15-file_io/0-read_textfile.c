#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *bufbuf;

	if (filename == NULL)
		return (0);

	bufbuf = malloc(sizeof(char) * letters);

	if (bufbuf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, bufbuf, letters);
	wr = write(STDOUT_FILENO, bufbuf, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(bufbuf);
		return (0);
	}

	free(bufbuf);
	close(op);

	return (wr);
}
