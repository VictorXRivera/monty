#include "monty.h"

/**
 * _pall - function to implement pall
 * Return: pall
 */
size_t _pall(void)
{
	size_t pall = 0;

	while (head != NULL)
	{
		if (head->prev == NULL)
			printf("%d\n", head->n);
		else
			printf("%d\n", head->n);
		head = head->next;
		pall++;
	}
	return (pall);
}
