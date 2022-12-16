#include "monty.h"

/**
 * free_stack - clears stack into double linked list
 * @h: pointer to top of stack
 */
void free_stack(stack_t **h)
{
	if (!*h)
		return;
	stack_t *temp;

	if ((*h)->next)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		(*h)->prev = NULL;
	}
	else
	{
		free(*h);
		*h = NULL;
	}
}
