#include "main.h"
/**
 * main - Copy the content of a file to another file
 * @ac: number of arguments
 * @av: array of pointers to the arguments
 *
 * Return: 0 on Success
*/
int main(int ac, char **av)
{
	int fd1, fd2;
	char *buffer;
	int r = -1, w;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buffer = malloc(1024);
	if (!buffer)
	{
		close(fd1);
		close(fd2);
		dprintf(2, "Error: Failed to allocate memory\n");
		exit(1);
	}
	while (r != 0)
	{
		r = read(fd1, buffer, 1024);
		if (r < 0)
		{
			free(buffer);
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (w < 0)
		{
			free(buffer);
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(fd1) < 0)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	free(buffer);
	return (0);
}
