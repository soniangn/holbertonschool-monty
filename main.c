#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
char *value;

int main(int argc, char *argv[])
{
	FILE *fp;
	char line[MAX_LEN];
	int line_number = 1;
	stack_t *top = NULL;

	/* checks if there are exactly 2 arguments */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		whilefree(&top);
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r"); /* opens the file */

	if (fp == NULL) /* if the file cannot be opened */
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		whilefree(&top);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, MAX_LEN, fp)) /* reads line by line */
	{
		value = strtok(line, "\n\t ");

		if (line[0] == '\n' && line[1] == '\0')
		{
			line_number++;
			continue;
		}
		else
		{
			get_instructions(value, &top, line_number);
			line_number++;
		}
	}
	fclose(fp);
	whilefree(&top);
	return (0);
}
