#include "monty.h"
#include <unistd.h>

/**
 * op_sub - function that subtracts the top element 
            of the stack from the second top element of the stack.
 * @top: double pointer to the stack
 * @line_number: the line number where the opcode is called
 * Return: 0
 */

void op_sub(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;
	int element1, element2, sub;

	if (*top == NULL || (*top)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", line_number);
		whilefree(top);
		exit(EXIT_FAILURE);
	}

	tmp = (*top)->next;
	element1 = (*top)->n;
    element2 = tmp->n;
	sub = element2 - element1;

    (*top)->n = sub;
    (*top)->next = tmp->next;
    free(tmp);
}

