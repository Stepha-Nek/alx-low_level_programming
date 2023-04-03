#include "lists.h"
/**
 * print_listint - function that  prints members of linked list
 * @h: linked list of type listint_t to be printed.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}
	return (num_node);
}
