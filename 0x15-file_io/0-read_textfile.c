#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the text file
 * @letters: the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 * 0 on faillure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf;
	ssize_t l;
	size_t i = 0;

	if (!filename || fd == -1 || !letters)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	l = read(fd, buf, letters);
	if (l == -1)
	{
		free(buf);
		return (0);
	}
	while (*(buf + i))
	{
		write(STDOUT_FILENO, &(*(buf + i)), 1);
		i++;
	}
	if (letters > i)
		i++;
	free(buf);
	close(fd);
	return (i);
}
