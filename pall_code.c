#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;

	/*if statement*/

	if (h == NULL)
		return;

	/*while loop*/

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
