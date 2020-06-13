#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * swap -  swaps opcode
 * @stack: stack from main
 * @line_num: line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = NULL;
	int number = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		status = EXIT_FAILURE;
		return;
	}
	temp = *stack;
	number = temp->n;
	temp->n = number;

	temp->n = temp->next->n;
	temp->next->n = number;

}
