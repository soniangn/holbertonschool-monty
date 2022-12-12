#include "monty.h"

/**
 * op_push - function that pushes an element to the stack
 * @stack: double pointer to the stack
 * @line_number: the line number where the opcode is called
 * @value: value of new node
*/
void op_push(stack_t **top, unsigned int line_number, char *value)
{
    stack_t *new;
    char *cmd;
    int value = 0;
    int i = 0;

    if (value == NULL)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    for (; value[i] != '\0'; i++)
    {
        if (isdigit(value[i]) == 0)
        {
            dprintf(stderr, "L%d: usage: push integer\n", line_number);
            exit(EXIT_FAILURE);
        }
    }

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new->n = atoi(value);
    new->next = NULL;
    new->prev = NULL;

    if (*top != NULL)
    {
        new->next = *top;
        (*top)->prev = new;
    }

    *top = new;
}
