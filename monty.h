#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/* GLOBAL VARIABLES */
extern char *value;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* MACROS */
#define MAX_LEN 100

/* Functions prototypes */
int main(int argc, char *argv[]);
void read_line(FILE *fp);
int _isdigit(char *c);
int get_instructions(char *str, stack_t **head, unsigned int line_number);
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **top, unsigned int line_number);
void op_pint(stack_t **top, unsigned int line_number);
void op_pop(stack_t **top, unsigned int line_number);
void op_nop(stack_t **top, unsigned int line_number);
void op_swap(stack_t **top, unsigned int line_number);
void op_sub(stack_t **top, unsigned int line_number);
void op_div(stack_t **top, unsigned int line_number);
void op_mul(stack_t **top, unsigned int line_number);
void whilefree(stack_t **top);
void op_add(stack_t **top, unsigned int line_number);
#endif /*MONTY_H*/
