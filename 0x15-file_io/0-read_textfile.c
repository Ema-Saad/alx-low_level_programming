#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: first arg
 * @letters: second arg
 * Return:  the actual number of letters, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file;
	ssize_t num;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(file, buf, letters);
	num = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file);
	return (num);
}

