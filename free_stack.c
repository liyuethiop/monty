#include "monty.h"

/**
 * free_stack - clears stack into double linked list
 * @h: pointer to top of stack
 */
void free_stack(stack_t **h)
{
	while (*h)
		simple_pop(h);
}
