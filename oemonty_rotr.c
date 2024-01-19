#include "monty.h"

/**
 * f_rotr - this is to rotates the stack to the bottom.
 * @head: Stack head
 * @counter: Line number (unused)
 * Return: Has no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	/*variable declaration*/
	stack_t *copy = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		/*Nothing to return*/
		return;
	}

	while (copy->next)
	{
		copy = copy->next;
	}

	/* Move the last element to the bottom */
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
