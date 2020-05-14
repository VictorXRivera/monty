#include "monty.h"

/**
 * main - main program to utilize monty
 * @argc: number of arguments
 * @argv: arguments to take in
 * Return: Success or Failure depending on conditional
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
