#include "monty.h"

/**
 * whilefree - free the double linked lists
 * @top: double linked list
 */

void whilefree(stack_t **top)
{
	stack_t *temp = NULL;

	while (*top != NULL)
	{
		temp = (*top)->next;
		free(*top);
		*top = NULL;
		*top = temp;
	}
	free(*top);
}
