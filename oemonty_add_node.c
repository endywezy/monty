#include "monty.h"

/**
 * addnode - This is to adds node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: has no return, nothing
 */
void addnode(stack_t **head, int n)
{

	/*variable declaration*/
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
}
