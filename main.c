#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, int *argv[])
{
	FILE *fp;
    char line[MAX_LEN];
	int line_nb = 1;

	/* checks if there is exactly 2 arguments */
	if (argc != 2)
	{
		dprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/* opens the file */
	fp = fopen(argv[1], "r");

    if (fp == NULL) /* if the file cannot be opened */
    {
        fprint(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, MAX_LEN, fp) != NULL) /* reads line by line */
    {
		parse();
		line_nb++;
    }

	fclose(fp);
	return (0);
}
