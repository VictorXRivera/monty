#include "monty.h"

/**
 * _pop - function to pop element in stack
 * Return: none
 */
void *_pop(void)
{
	stack_t *temp;

	if (head == NULL)
		exit(EXIT_FAILURE);
	temp = head;
	head = head->next;
	free(temp);
}
