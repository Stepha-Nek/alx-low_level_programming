#include "lists.h"
/**
 * add_nodeint - function adds a new node to the beginning of a linked list
 * @head: the pointer to the first node on the linked list
 * @n: new data to be inserted in new node
 *
 * Return: the pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

