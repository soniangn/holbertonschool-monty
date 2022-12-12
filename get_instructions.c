#include "monty.h"

/**
 * get_instructions - selects the correct function to
 *                     perform the opcode passed
 * @str: the string to check
 * @head: double pointer to the linked list
 * 
*/
int get_instructions(char *str, stack_t **head, unsigned int line_number)
{
    instruction_t opcodes[] = {
        {"pall", op_pall}, 
        {NULL, NULL}
    };
    int i = 0;

    while (opcodes[i].opcode != NULL)
    {
        if (strcmp(opcodes[i].opcode, str) == 0)
        {
            opcodes[i].f(head, line_number);
            return (EXIT_SUCCESS);
        }
        i++;
    }
    free(head);
    fprint(stderr, "L%i: unknown instructions %s\n", line_number, str[0]);
    return (EXIT_FAILURE);
}