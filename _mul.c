#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mul - divides the next top value by the top value
 * @stack: stack from main
 * @line_num: line number
 *
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_num)
{
	int multiplication;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		status = EXIT_FAILURE;
		return;
	}

	multiplication = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = multiplication;
}

