#include "monty.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @ac: number of args
 * @av: args
 * Return: 0 if succes
 */

char *value;

int main(int argc, char *argv[])
{
	FILE *fp;
	char line[MAX_LEN];
	int line_number = 1;
	/*char *opcode;*/
	stack_t **head = NULL;

	head = malloc(sizeof(stack_t));
	if (head == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	/* checks if there are exactly 2 arguments */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r"); /* opens the file */

	if (fp == NULL) /* if the file cannot be opened */
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, MAX_LEN, fp) != NULL) /* reads line by line */
	{
		value = strtok(line, "$ \n\t");
		if (strcmp(value, "push") == 0)
		{
			value = strtok(NULL, " ");
			op_push(head, line_number);
		}
		else
			get_opcode(value, &*head, line_number);
		line_number++;
	}
	fclose(fp);
	return (0);
}
