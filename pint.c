#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - pint opcode
 * @stack: stack from main
 * @line_num: number of lines
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		status = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}
