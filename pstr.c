#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - pstr opcode
 * @stack: stack from main
 * @line_num: line number
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_num __attribute__((unused)))
{
	stack_t *p_str = *stack;

	while (p_str)
	{
		if (p_str->n <= 0 || p_str->n > 127)
			break;
		putchar((char) p_str->n);
		p_str = p_str->next;
	}
	putchar('\n');
}
