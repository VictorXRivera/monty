#include "monty.h"

/**
 * make_new_node - function to make new node
 * @n: integer from struct
 * Return: new node
 */
stack_t *make_new_node(int n)
{
	stack_t *NewNode = malloc(sizeof(stack_t));

	if (NewNode == NULL)
		return NULL;
	NewNode->n = n;
	NewNode->next = NULL;
	return (NewNode);
}
