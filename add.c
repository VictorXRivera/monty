#include "monty.h"

/**
 * add - Function to add to stack
 * @stack: start of stack
 * @line_number: line number
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *holder;
	int result;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	holder = *stack;
	result = holder->n + holder->next->n;
	holder->next->n = result;

	free(holder);
}
