#include "monty.h"
/**
 * push - pushes an element to the stack.
 * @stack: pointer of the stack
 * @line_num: number assigned to stack element
 */
void push(stack_t **stack, unsigned int line_num)
{
	stack_t *new;
	char *arg;
	int status;

	if (!stack)
	{
		return;
	}
	new = malloc(sizeof(stack_t));
	/**if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		clear_stack(stack);
		exit(EXIT_FAILURE);
	}**/

	arg = strtok(NULL, " ");
	status = isnum(arg);
	if (status == -1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	else
	{
		new->n = atoi(arg);
	}

	new->next = *stack;
	new->prev = NULL;
	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		(*stack)->prev = new;
		*stack = new;
	}
}
