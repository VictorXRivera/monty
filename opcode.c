#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * opcode - function in charge of running builtins
 * @stack: stack from main
 * @str: string to compare
 * @line_num: line numbers
 *
 * Return: nothing
 */
void opcode(stack_t **stack, char *str, unsigned int line_num)
{
	int n = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[n].opcode)
	{
		if (strcmp(op[n].opcode, str) == 0)
		{
			op[n].f(stack, line_num);
			return; /* if we found a match, run the function */
		}
		n++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, str);
	status = EXIT_FAILURE;
}
