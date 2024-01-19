#include "monty.h"

/**
 * f_pop - This prints the top
 * @head: stack head
 * @counter: line_number
 * Return: returns nothing
*/
void f_pop(stack_t **head, unsigned int counter)
{
	/*variable declaration*/
	stack_t *temp;

	/* Check if the stack is empty */
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = temp->next;
	free(temp);
}
