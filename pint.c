#include "monty.h"

/**
 * pint - function to print value at top of stack
 * @stack: double pointer referring to top of stack
 * @line_number: line number
 * Return: Void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
