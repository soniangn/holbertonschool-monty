#include "monty.h"
#include <unistd.h>
#include <ctype.h>
#include <string.h>
/**
 * op_push - function that pushes an element to the stack
 * @top: double pointer to the stack
 * @line_number: the line number where the opcode is called
 * @value: value of new node
 * Return: 0
 */
void op_push(stack_t **top, unsigned int line_number, char *value)
{
	stack_t *new;
	int element;

	if (value == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = strtok(value, "$");
	element = atoi(value);

	if (isdigit(element) == 0)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer (%d)\n", line_number, element);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		exit(EXIT_FAILURE);
	}

	new->n = element;
	new->next = NULL;
	new->prev = NULL;

	if ((*top) != NULL)
	{
		(*top)->prev = new;
	}
	new->next = *top;
	*top = new;
}
