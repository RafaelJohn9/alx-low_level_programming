#include "main.h"
#include <string.h>

/**
 * append_text_to_file-appends at the end of a line
 * @filename:file name
 * @text_content:text content
 * Return:1 if successful -1 if not successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned long int bytes;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT);
	if (!fd)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	bytes = write(fd, text_content, strlen(text_content));
	if (bytes != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
