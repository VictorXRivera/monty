#include "monty.h"

/**
* rotr - rotates the last node
* @stack: stack head
* @line_number: line number
*
* Return: void
*/
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *bottom;
	stack_t *prev;

	(void) line_number;
	if (!stack || !*stack || !(*stack)->next)
		return;

	bottom = *stack;

	while (bottom->next)
		bottom = bottom->next;

	prev = bottom->prev;
	bottom->next = *stack;
	bottom->prev = NULL;
	prev->next = NULL;
	(*stack)->prev = bottom;
	*stack = bottom;
}
