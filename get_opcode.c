#include "monty.h"
#include <string.h>
#include <unistd.h>

/**
 * get_opcode - call the functione opcode in the monty file
 * @buf: string in the monty file
 * @head: double pointer of the linked list (next&prev)
 * @line_number: line of the file
 * Return: 0 if succes
 */


int get_opcode(char *buf, stack_t **head, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{NULL, NULL}
	};
	int i = 0;

	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(opcodes[i].opcode, buf) == 0)
		{
			opcodes[i].f(head, line_number);
			return (EXIT_SUCCESS);
		}
		i++;
	}
	free(head);
	dprintf(STDERR_FILENO, "L%i: unknown instructions %s\n", line_number, buf);
	return (EXIT_FAILURE);
}
