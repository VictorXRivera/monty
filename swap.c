#include "monty.h"

/**
 * swap - function to swap elements in stack
 * @stack: start of the stack
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *element;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	element = (*stack)->next;

	(*stack)->prev = element;
	(*stack)->next = element->next;

	element->prev = NULL;

	if (element->next)
		element->next->prev = *stack;

	element->next = *stack;

	*stack = element;
}
