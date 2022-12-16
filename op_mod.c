#include "monty.h"
#include <unistd.h>
#include <string.h>
/**
 * op_mod - computes the rest of the division of the second 
 *          top element of the stack by the top element of the stack
 * @top: double pointer to the stack
 * @line_number: the line number where the opcode is called
 * Return: 0
 */

void op_mod(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;
	int element1, element2, mod;

    value = strtok(NULL, " \n\t");

	if (*top == NULL || (*top)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n", line_number);
		whilefree(top);
		exit(EXIT_FAILURE);
	}

    if ((*top)->n == 0)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", line_number);
		whilefree(top);
		exit(EXIT_FAILURE);
	}

    tmp = (*top)->next;
	element1 = (*top)->n;
    element2 = tmp->n;
    mod = element2 % element1;

    (*top)->n = mod;
    (*top)->next = tmp->next;
    free(tmp);
}
