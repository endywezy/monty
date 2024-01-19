#include "monty.h"

/**
 * f_sub - This is subtract the top element from the second top element
 * @head: Stack head
 * @counter: Line number
 * Return: Has no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	/*variable declaration*/
	stack_t *current = *head;
	int num_nodes, result;

	/* Count the number of nodes in the stack */
	for (num_nodes = 0; current != NULL; num_nodes++)
		current = current->next;

	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	result = current->next->n - current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
