#include "monty.h"

/**
 * check_arguments - checks arguments entered
 * @argc: argument count
 */
void check_arguments(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * file_open_status - checks if file was opened correctly
 * @fd: file descriptor to check for error
 * @argv: the arguments passed to the function
 *
 * exits with EXIT_FAILURE if appropriate
 */
void file_open_status(int fd, char *argv[])
{
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}

/**
 * check_valid_instruc - check if the instruction passed is valid or not
 * @s: string to check
 * @line_number: number of line count
 * @buf: buf to free if command not found
 *Return: 1 in sucssus
 * -1 if command not found
 */
int check_valid_instruc(char *s, unsigned int line_number, char *buf)
{
	int i;
	char *valid_commands[] = {"push", "pall", "pint",
				  "pop", "swap", "add",
				  "nop", "sub", "div", "mul", NULL};

	for (i = 0; valid_commands[i]; i++)
	{
		if (strcmp(valid_commands[i], s) == 0)
			return (1);
	}
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, s);
	free(buf);
	free_stack(&stack);
	return (-1);
}
