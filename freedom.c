#include "monty.h"

/**
 * freedom - function to free global variable in header
 * Return: void
 */
void freedom(void)
{
	stack_t *liberate;
	stack_t *element = NULL;

	liberate = *stack_top;

	while (liberate)
	{
		element = liberate->next;

		free(liberate);

		liberate = element;
	}
}
