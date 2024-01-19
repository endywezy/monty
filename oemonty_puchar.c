#include "monty.h"

/**
 * f_pchar - to  prints the char at the top of the stack, follow a new line.
 * @head: Stack head
 * @counter: Line number
 * Return: Has no return
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	/*variable declaration*/
	stack_t *current = *head;

	if (!current)
		handle_pchar_error(counter, "stack empty");

	if (current->n > 127 || current->n < 0)
		handle_pchar_error(counter, "value out of range");

	printf("%c\n", current->n);
}

/**
 * handle_pchar_error - This handles pchar-related errors.
 * @counter: Line number
 * @message: Error message
 * Return: Has no return
 */
void handle_pchar_error(unsigned int counter, const char *message)
{
	fprintf(stderr, "L%d: can't pchar, %s\n", counter, message);
	fclose(bus.file);
	free(bus.content);
	free_stack(bus.head);
	exit(EXIT_FAILURE);
}
