#include "main.h"
/**/
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	fd = creat(filename, S_IREAD | S_IWRITE);
	if (fd < 0)
		return (0);
	w = write(fd, text_content, strlen(text_content));
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}
