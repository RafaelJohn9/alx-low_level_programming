#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file-a funtion that creates file
 * @filename:name of the file to create and text content
 * @text_content:text content
 */
int create_file(const char *filename, char *text_content)
{
	FILE *doc;
	ssize_t  len = strlen(text_content); 

	if (!filename)
	{
		return (-1);
	}
	doc = fopen(filename, "w+");
	chmod(filename, 0600);
	if (!doc)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fclose(doc);
		return (1);
	}
	fwrite(text_content, sizeof(char), len, doc);
	return (1);
}
