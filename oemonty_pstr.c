#include "monty.h"

/**
 * f_pstr - Prints the string from top of the stack, follow a newline
 * @head: Stack head
 * @counter: Line number
 * Return: Has no return, nothing
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	/*variable declaration*/
	stack_t *current = *head;
	(void)counter;

	while (current && (current->n > 0 && current->n <= 127))
	{
		printf("%c", current->n);
		current = current->next;
	}

	printf("\n");
}
