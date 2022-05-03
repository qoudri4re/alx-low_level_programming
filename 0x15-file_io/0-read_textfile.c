#include "mainn.h"
/**
 * read_textfile - Read a text file
 * @filename: header of the linked list to print
 * @letters: header of the linked list to print
 * Return: number of nodes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, x;
	char *w;

	fd = open(filename, O_RDONLY);

	if ((fd == -1) | (filename == NULL))
	{
		return (0);
	}

	w = malloc(letters + 1);
	if (w == NULL)
	{
		return (0);
	}
	w[letters] = '\0';

	r = read(fd, w, letters);
	if (r == -1)
	{
		return (0);
		free(w);
	}
	x = write(STDOUT_FILENO, w, r);
	if (x == -1)
	{
		return (0);
		free(w);
	}
	free(w);
	close(fd);
	return (x);
}
