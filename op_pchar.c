#include "monty.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
/**
 * op_pchar - prints the char at the top of the stack, followed by a new line.
 * @top: double pointer to the stack
 * @line_number: the line number where the opcode is called
 * Return: 0
 */

void op_pchar(stack_t **top, unsigned int line_number)
{
    if (*top == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n", line_number);
		whilefree(top);
		exit(EXIT_FAILURE);
	}

	if ((*top)->n < 0 || (*top)->n > 127)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, value out of range\n", line_number);
		whilefree(top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*top)->n);
}
