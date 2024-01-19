#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0, NULL};

#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L
/**
* main - This is the monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: returns 0 always or success
*/
int main(int argc, char *argv[])
{
	/*Variable Declaration*/
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;
	char *content = NULL;
	/*read_line = _getline(&content, &size, file);*/
	if (argc != 2)/*loop*/
	{
		/*Handle incorrect number of arguments*/
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;

	if (read_line > 0)
	{
		execute(content, &stack, counter, file);
	}
		free(content);
		content = NULL;
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
