#include "main.h"
/**
 * handle_close - free buffer when close() fails
 * @fd: file descriptor that failed to close
 * @b: buffer to free
 *
 * Return: Always 100
*/
int handle_close(int fd, char **b)
{
	free(*b);
	dprintf(2, "Error: Can't close fd %d\n", fd);
	return (100);
}
/**
 * copy_file - Copy from file to file
 * @fd1: pointer to first file descriptor
 * @fd2: pointer to second file descriptor
 * @buffer: adress of buffer
 * @a1: name of first file
 * @a2: name of second file
 *
 * Return: 1 on success
 * 98 fail to read
 * 99 fail to write
*/
int copy_file(int *fd1, int *fd2, char **buffer, char *a1, char *a2)
{
	int r = -1, w;

	while (r != 0)
	{
		r = read(*fd1, *buffer, 1024);
		if (r < 0)
		{
			free(*buffer);
			dprintf(2, "Error: Can't read from file %s\n", a1);
			return (98);
		}
		w = write(*fd2, *buffer, r);
		if (w < 0)
		{
			free(*buffer);
			dprintf(2, "Error: Can't write to %s\n", a2);
			return (99);
		}
	}
	return (1);
}
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
	int n;

	if (ac != 3 || !strlen(av[1]) || !strlen(av[2]))
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
	n = copy_file(&fd1, &fd2, &buffer, av[1], av[2]);
	if (n != 1)
		exit(n);
	if (close(fd1) < 0)
		exit(handle_close(fd1, &buffer));
	if (close(fd2) < 0)
		exit(handle_close(fd2, &buffer));
	free(buffer);
	return (0);
}
