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

int main(int ac, char *av[])
{
	FILE *fd; /* file descriptor */
	char *buf; /* line of the file */
	stack_t **head;
	char *opcode; /* line who is strtok */
	int line_number = 1; /* number of the line in the file */

	if (ac != 2) /* if arguments are not 2 */
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(av[1], "r"); /* open file */

	while (fgets(buf, strlen(buf), fd) != NULL) /* read line per line */
	{
		opcode = strtok(buf, " /n/t"); /* cut the line */
		/* function who the call the func opcode if strcmp is 0*/
		get_opcode(opcode, head, line_number);
		line_number++;
	}
	fclose(fd); /* close the file */
	return (0);
}
