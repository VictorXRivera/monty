#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * add -  add opcode
 * @stack: stack given by main
 * @line_num: line counter
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int line_num)
{
	int sum;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		status = EXIT_FAILURE;
		return;
	}

	sum = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_num);/*For top node*/
	(*stack)->n = sum;
}
