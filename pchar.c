#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pchar - pchar opcode
 * @stack: stack from main
 * @line_num: line numbers
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_num)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		status = EXIT_FAILURE;
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		status = EXIT_FAILURE;
		return;
	}
	printf("%c\n", (*stack)->n);
}
