#include "monty.h"

/**
 * push - function to implement push opcode
 * @stack: double pointer to start of list
 * @line_number: line number
 * Return: none
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *element = malloc(sizeof(stack_t));
	char *ptr;

	ptr = strtok(NULL, DELIMS);
	if (ptr == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (element == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	element->n = atoi(ptr);
	element->prev = NULL;
	element->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = element;
	*stack = element;
}
