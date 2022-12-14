#include "monty.h"

/**
 * free_stack - clears stack into double linked list
 * @h: pointer to top of stack
 */
void free_stack(stack_t *h)
{
	if (!h)
		return;
	while (h->next)
	{
		h = h->next;
		free(h->prev);
	}
	free(h)
}
