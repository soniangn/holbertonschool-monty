#include "monty.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * op_pint - function that print the first node
 * @top: double pointer to the stack
 * @line_number: the line number where the opcode is called
 */
void op_pint(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		free(top);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*top)->n);
}
