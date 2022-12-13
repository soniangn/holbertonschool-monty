#include "monty.h"
#include <string.h>

/**
 * get_opcode - call the functione opcode in the monty file
 * @buf: string in the monty file
 * @head: double pointer of the linked list (next&prev)
 * @line_number: line of the file
 * Return: 0 if succes
 */


int get_opcode(char *buf, stack_t **head, unsigned int line_number)
{
	/* struct who call the function */
	instruction_t func[] = {
		{"push", op_push},
		{NULL, NULL}
	};
	int i = 0;

	while (func[i].opcode != NULL) /*loop for call the function */
	{
		/* if the name of the function is 0 call the func */
		if (strcmp(func[i].opcode, buf) == 0)
			func[i].f(head, line_number);
			return (1); /* return the function */
		i++;
	}
return (0);
}
