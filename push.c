#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - push opcode
 * @stack: the stack from main
 * @line_num: number of lines
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_num)
{
	char *h = global.argument;

	if ((is_digit(h)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		status = EXIT_FAILURE;
		return;
	}

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
}
