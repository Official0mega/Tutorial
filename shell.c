#include "official0mega.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **argv)
{
	char *prompt = "(OmegaShell) $ ";
	char *lineptr;
	size_t n = 0;
	ssize_t nchars_read;
	
	/* Delaring ac, argv as void variables */
	(void)ac;
	(void)argv;

	/* Creating an Infinite Loop */
	while(1)
	{
		printf("%s", prompt);
		nchars_read = getline(&lineptr, &n, stdin);

		/* This checks if thr getline function failed or reached EOF or user uses CTRL + D */
		if (nchars_read == -1)
		{
			printf("Exiting shell.....\n");
			return (-1);
		}

		printf("%s\n", lineptr);

		/* Freeing up allocated Memory */
		free(lineptr);
		continue;
	}

	return (0);
}
