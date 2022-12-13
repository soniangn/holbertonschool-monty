#include "monty.h"

void push(stack_t **stack, unsigned int line_number);
{
	stack = malloc(sizeof(stack_t));
	if (stack == NULL)
	{
		free(stack);
		return (NULL);
	}

	head->next = stack;
	stack->next = NULL;
	stack->prev = head;
	head = stack;
