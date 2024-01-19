#include "monty.h"

/**
 * f_nop - nothing, no operation
 * @head: stack head
 * @counter: line_number
 * Return: Has no return
 */
void f_nop(stack_t **head, unsigned int counter)
{
	/* (void) is used to silence compiler warnings*/
	(void)counter;
	(void)head;
}
