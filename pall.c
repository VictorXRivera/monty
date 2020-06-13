#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack from main
 * @line_num: line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_num __attribute__((unused)))
{
	print_stack(*stack);
}
