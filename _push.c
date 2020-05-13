#include "monty.h"

/**
 * _push - function to implement push opcode
 * @head: start of the list
 * @n: integer
 * Return: none
 */
void _push(stack_t **head, int n)
{
	stack_t *stacknode;

	stacknode = make_new_node(n);
	stacknode->next = *head;
	*head = stacknode;
}
