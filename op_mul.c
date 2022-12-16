#include "monty.h"
#include <unistd.h>
#include <string.h>
/**
 * op_mul - function that multiplies the second top element of
 *          the stack with the top element of the stack
 * @top: double pointer to the stack
 * @line_number: the line number where the opcode is called
 * Return: 0
 */

void op_mul(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;
	int element1, element2, mul;

	value = strtok(NULL, " \n\t");

	if (*top == NULL || (*top)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't mul, stack too short\n", line_number);
		whilefree(top);
		exit(EXIT_FAILURE);
	}

	tmp = (*top)->next;
	element1 = (*top)->n;
	element2 = tmp->n;
	mul = element1 * element2;

	(*top)->n = mul;
	(*top)->next = tmp->next;
	free(tmp);
}
