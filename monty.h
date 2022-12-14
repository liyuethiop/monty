#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

extern stack_t *stack;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


int isnum(char *s);

int check_valid_instruc(char *s, unsigned int line_number, char *buf);
void file_open_status(int fd, char *argv[]);
void check_arguments(int argc);

void get_op(char *op, stack_t **stack, unsigned int line_number);


void interpret(char *buf, unsigned int line_number,
		       int fd, FILE *fpointer);

void free_stack(stack_t **h);

void simple_pop(stack_t **stack);
void push(stack_t **stack, unsigned int line_number);

void pall(stack_t **stack, unsigned int line_number);

void pop(stack_t **stack, unsigned int line_number);




#endif
