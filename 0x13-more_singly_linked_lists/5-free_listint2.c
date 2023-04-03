#include "lists.h"
/**
 * free_listint2 - frees  a linked list, returns NULL
 * @head: pointer to linked list to be freed
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head != 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
