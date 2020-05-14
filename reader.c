#include "monty.h"

/**
 * reader - function made to read file passed to program
 * @the_file: file's name
 * @stack: double pointer to top of stack
 * Return: void
 */
void reader(char *the_file, stack_t **stack)
{
	size_t length;
	ssize_t line;
	unsigned int integer = 0;
	char *file_line = NULL;
	FILE *fd;
	char *com;

	fd = fopen(the_file, "r");
	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", the_file);
		exit(EXIT_FAILURE);
	}

	while ((line = getline(&file_line, &length, fd)) != -1)
	{
		com = strtok(file_line, DELIMS);
		integer++;

		if (com)
			parse_commands(stack, com, integer);
	}
	if (file_line)
		free(file_line);

	fclose(fd);
}
