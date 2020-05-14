#include "monty.h"

/**
 * pop - Function that removes the top element of the stack
 * @stack: double pointer referring to top of stack
 * @line_number: line number
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *holder;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	holder = *stack;
	*stack = (*stack)->next;

	free(holder);
}
