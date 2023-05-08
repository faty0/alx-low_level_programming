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
	FILE *p = fopen(filename, "r");
	size_t l = 0;
	char c;

	if (!filename || !p)
		return (0);
	while (l < letters)
	{
		c = fgetc(p);
		l++;
		if (c == EOF)
			break;
		write(STDOUT_FILENO, &c, 1);
	}
	fclose(p);
	return (l);
}
