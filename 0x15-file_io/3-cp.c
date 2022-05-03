#include "holberton.h"
/**
  * main - entry point
  * @ac: argument count
  * @av: array of argument tokens
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	int ffrom, fto, rstar, wstar;
	mode_t p_v = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ffrom = open(av[1], O_RDONLY);
	if (ffrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fto = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, p_v);
	if (fto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rstar = 1;
	while (rstar)
	{
		rstar = read(ffrom, buf, 1024);
		if (rstar == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (rstar > 0)
		{
			wstar = write(fto, buf, rstar);
			if (wstar != rstar || wstar == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(ffrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom), exit(100);
	if (close(fto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto), exit(100);
	return (0);
}
