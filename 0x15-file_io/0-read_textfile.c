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
	int fd;
	char *buf;
	ssize_t l;

	if (!filename | !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	l = read(fd, buf, letters);
	if (l < 0)
	{
		free(buf);
		return (0);
	}
	l = write(STDOUT_FILENO, buf, l);
	if (l < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (l);
}
