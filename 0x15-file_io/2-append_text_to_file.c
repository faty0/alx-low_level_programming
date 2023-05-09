#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: the string to add at the end of the file
 *
 * Return: 1 on Success
 * -1 upon faillure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wp;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY | O_APPEND, 0);
	if (fd < 0)
		return (-1);
	wp = write(fd, text_content, text_content ? strlen(text_content) : 0);
	if (wp < 0)
		return (-1);
	close(fd);
	return (1);
}
