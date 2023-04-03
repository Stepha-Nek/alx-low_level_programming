#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: linked list of type listint_t to be freed
 *
 *Return: nothing, void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head->next;
		free(head);
		head = temp;

	}
}
