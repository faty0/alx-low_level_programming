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
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	fd2 = creat(av[2], 0664);
	if (fd1 < 0)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd2 < 0)
	{
		printf("Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buffer = malloc(1024);
	while (r != 0)
	{
		r = read(fd1, buffer, 1024);
		if (r < 0)
		{
			free(buffer);
			printf("Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		w = write(fd2, buffer, 1024);
		if (w < 0)
		{
			free(buffer);
			printf("Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		buffer[0] = '\0';
	}
	if (close(fd1) < 0)
	{
		free(buffer);
		printf("Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		free(buffer);
		printf("Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	free(buffer);
	return (0);
}
