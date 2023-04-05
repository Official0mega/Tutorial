/*
 * File: print_text.c
 * Created: 5 of April, 2023
 * Auth: David James Taiye.
 * Size: undefined.
 * Project: alx-low_level_programming.
 * Status: submitted.
 */

#include <stdlib.h>
#include "official0mega.h"
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - a program that prints texts from a file
 *
 * @filename: name of the file.
 * @letters: number of characters to read.
 * Return: actual number of letters read, 0 if end of file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_type;
	char *flow;
	int length, read_char;

	if (filename == NULL || letters == 0)
		return (0);
	flow = malloc(sizeof(char) * (letters));
	if (flow == NULL)
		return (0);

	file_type = open(filename, O_RDONLY);
	if (file_type == -1)
	{
		free(flow);
		return (0);
	}
	length = read(file_type, flow, letters);
	if (length == -1)
	{
		free(flow);
		close(file_type);
		return (0);
	}

	read_char = write(STDOUT_FILENO, flow, length);

	free(flow);
	close(file_type);
	if (read_char != length)
		return (0);
	return (length);
}

