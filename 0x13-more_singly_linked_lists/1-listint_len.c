#include "lists.h"
/**
 * listint_len - returns the number of members in a linked list
 * @h: linked list of type listint_h to be traversed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h != 0)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
