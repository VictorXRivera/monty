#include "monty.h"

/**
 * pall - function to print all values from stack
 * @stack: double pointer referring to start of stack
 * @line_number: a line number
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *holder = *stack;

	(void) line_number;

	while (holder)
	{
		printf("%d\n", holder->n);
		holder = holder->next;
	}
}
