#include "monty.h"
/**
 * pall - prints all the values on the stack, starting from the top stack
 * @stack: pointer to top of stack
 * @line_number: void argument
 */
void pall(stack_t **stack, int line_number)
{
	stack_t *tmp;


	for (tmp = *stack; tmp; tmp = tmp->next)
		printf("%d\n", tmp->n);
}
