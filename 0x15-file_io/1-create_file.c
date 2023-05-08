#include "main.h"
#include <sys/stat.h>
#include <stdio.h>
#include <sys/types.h>
/**
 * create_file-a funtion that creates file
 * @filename:name of the file to create and text content
 * @text_content:text content
 * Return: 1-successful -1-unsuccessful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
		bytes = write(fd, text_content, len);
		if (bytes != len)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
