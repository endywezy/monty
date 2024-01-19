#include "monty.h"

/**
 * f_rotl - this is to rotate the stack, moving the second element.
 * @head: Stack head
 * @counter: Line number (unused)
 * Return: Has no return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	/*variable Declaration*/
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		/*Nothig to return*/
		return;
	}

	aux = (*head)->next;
	aux->prev = NULL;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	/* Move the second element to the top */
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
