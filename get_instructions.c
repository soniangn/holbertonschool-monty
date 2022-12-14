#include "monty.h"
#include <string.h>
#include <unistd.h>
/**
 * get_instructions - selects the correct function to
 *                     perform the opcode passed
 * @str: the string to check
 * @head: double pointer to the linked list
 * @line_number: line number of file
 * Return: success or failure
 *
 */
int get_instructions(char *str, stack_t **head, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"pall", op_pall},
		{"pint", op_pint},
		{NULL, NULL}
	};
	int i = 0;

	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(opcodes[i].opcode, str) == 0)
		{
			opcodes[i].f(head, line_number);
			return (EXIT_SUCCESS);
		}
		i++;
	}

	free(head);
	dprintf(STDERR_FILENO, "L%i: unknown instructions (%s), %ld\n", line_number, str, strlen(value));
	return (EXIT_FAILURE);
}
