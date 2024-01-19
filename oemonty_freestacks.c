#include "monty.h"
/**
 * free_stack - it frees Stacks
 * @head: head
 * Return: Has no return, nothing
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
