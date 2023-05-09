#include "main.h"
/**
 * create_file - Creates a file
 * @filename: the name of the file to create
 * @text_content: the string to write to the file
 *
 * Return: 1 on Success
 * -1 upon faillure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	fd = creat(filename, S_IREAD | S_IWRITE);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, text_content ? strlen(text_content) : 0);
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}
