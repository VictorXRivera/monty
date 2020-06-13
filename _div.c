#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * div - division
 * @stack: stack from main
 * @line_num: line number
 *
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_num)
{
	int division;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		status = EXIT_FAILURE;
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		status = EXIT_FAILURE;
		return;
	}

	division = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = division;
}
