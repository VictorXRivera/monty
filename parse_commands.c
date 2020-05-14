#include "monty.h"

/**
 * parse_commands - function to parse commands passed to monty executable
 * @stack: double pointer to top of stack
 * @co: commands passed to program that needs to be parsed
 * @line_number: line number
 * Return: void
 */
void parse_commands(stack_t **stack, char *co, unsigned int line_number)
{
	int it;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	for (it = 0; ops[it].opcode; it++)
		if (strcmp(co, ops[it].opcode) == 0)
		{
			ops[it].f(stack, line_number);
			return;
		}
	if (strlen(co) != 0 && co[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", line_number, co);
		exit(EXIT_FAILURE);
	}
}
