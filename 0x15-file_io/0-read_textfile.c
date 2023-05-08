#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * read_textfile-prints it to the POSIX standard input
 * @filename:files name
 * @letters:number of letters to be printed
 * Return:num of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *document;
	ssize_t len;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename)
	{
		return (0);
	}
	document = fopen(filename, "r");
	if (!document)
	{
		return (0);
	}
	len = fread(buffer, sizeof(char), letters, document);
	if ((int)letters > len)
	{
		letters = len;
	}
	write(1, buffer, len);
	fclose(document);
	free(buffer);
	return ((ssize_t)letters);
}
