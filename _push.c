#include "monty.h"

/**
 * _push - function to implement push opcode
 * @x: integer to be passed in
 * Return: none
 */
void _push(int x)
{
	stack_t *temp = malloc(sizeof(stack_t));

	if (temp == NULL)
		exit(EXIT_FAILURE);
	temp->n = x;
	temp->next = head;
	temp->prev = NULL;
	head = temp;
}
