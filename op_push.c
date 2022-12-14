#include "monty.h"
#include <unistd.h>
#include <ctype.h>
#include <string.h>
/**
 * op_push - function that pushes an element to the stack
 * @top: double pointer to the stack
 * @line_number: the line number where the opcode is called
 * Return: 0
 */
char *value;

void op_push(stack_t **top, unsigned int line_number)
{
	stack_t *new;
	int element;

	if (value == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		free(top);
		exit(EXIT_FAILURE);
	}

	if (_isdigit(value) == 1)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer %s\n", line_number, value);
		free(top);
		exit(EXIT_FAILURE);
	}

	element = atoi(value);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		exit(EXIT_FAILURE);
	}

	new->n = element;
	new->prev = NULL;
	new->next = *top;

	if ((*top) != NULL)
	{
		(*top)->prev = new;
	}
	*top = new;
}