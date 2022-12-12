#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, int *argv[])
{
	/* checks if there is 2 arguments */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
	/* calls the open_file function to open the file */
	open_file(argv[1]);
	return (0);
}
