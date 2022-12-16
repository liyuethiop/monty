#include "monty.h"

/**
 * get_instruct - function reads command string and selects
 * the correct function to perform
 * @s: string
 *
 * Return: pointer corresponding function
 */
void get_instruct(char *s, stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"pall", pall},
		{"push", push},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].opcode != NULL)
	{
		if (strcmp(s, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_number);
		}
		i++;
	}
	exit(-1);
}
