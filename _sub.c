#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * sub -  substracts
 * @stack: stack from main
 * @line_num: line number
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_num)
{
	int subtraction;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		status = EXIT_FAILURE;
		return;
	}

	subtraction = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = subtraction;
}
