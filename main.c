#include "monty.h"

stack_t **stack_top;

/**
 * main - main program to utilize monty
 * @argc: number of arguments
 * @argv: arguments to take in
 * Return: Success or Failure depending on conditional
 */
int main(int argc, char *argv[])
{
	stack_t *top;


	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	top = NULL;
	stack_top = &top;

	reader(argv[1], &top);

	atexit(freedom);

	exit(EXIT_SUCCESS);
}
