#include "monty.h"

/**
 * op_pall - function that print all the values on the stack
 * @stack: double pointer to the stack
 * @line_number: the line number where the opcode is called
*/
void op_pall(stack_t **top, unsigned int line_number)
{
    stack_t *temp;
    (void)line_number;

    temp = *top;

    while (temp != NULL)
    {
        printf("%d", temp->n);
        temp = temp->next; 
    }
    free(temp);
}