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
        {"push", push}, 
        {NULL, NULL}
    };
    int i = 0;

    while (opcodes[i].opcode != NULL)
    {
        if (strcmp(opcodes[i].opcode, str) == 0)
            opcodes[i].f(head, line_number);
            return (1);
        i++;
    }
    return (0);
}