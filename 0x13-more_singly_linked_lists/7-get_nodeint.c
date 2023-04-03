#include "lists.h"
/**
 * get_nodeint_at_index - returns node at specifoed index in linked list
 * @head: first node of linked list
 * @index: index of the node to return
 *
 * Return: pointer to specified node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != 0 && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
