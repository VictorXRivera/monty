#include "monty.h"

/**
 * _pall - function to implement pall opcode
 * @head: pointer to struct
 * @n: integer
 * Return: void
 */
void _pall(stack_t **head, int n)
{
	stack_t *temporary = *head;

	(void) n;

	while (temporary)
	{
		print("%d\n", temporary->n);
		temp = temp->next;
	}
}
