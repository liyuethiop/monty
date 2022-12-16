#include "monty.h"

/**
 * get_op - function reads command string and selects
 * the correct function to perform
 * @s: string
 *
 * Return: pointer corresponding function
 */
void get_op(char *op, stack_t **stack, unsigned int line_number)
{
	size_t i;
	instruction_t valid_ops[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{NULL, NULL}
	};

	for (i = 0; valid_ops[i].opcode != NULL; i++)
	{
		if (strcmp(valid_ops[i].opcode, op) == 0)
		{
			valid_ops[i].f(stack, line_number);
			return;
		}
	}
	exit(EXIT_FAILURE);
}
