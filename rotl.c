#include "monty.h"

/**
* rotl - rotates the first element of the stack
* @stack: stack
* @line_number: line number
*
* Return: void
*/
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *left;
	stack_t *right;

	(void) line_number;
	if (!stack || !*stack || !(*stack)->next)
		return;

	left = right = *stack;

	while (right->next)
		right = right->next;
	right->next = left;
	left->prev = right;
	*stack = left->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
