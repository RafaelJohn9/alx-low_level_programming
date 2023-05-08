#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

/**
 * append_text-appends at the end of a line
 * @filename:file name
 * @text_content:text content
 * Return:1 if successful -1 if not successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND);
	if (!fd)
	{
		return (-1);
	}
	if (!text_content)
	{
		return(1);
	}
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
