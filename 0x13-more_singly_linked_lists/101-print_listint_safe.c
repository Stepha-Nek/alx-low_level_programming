#include "lists.h"
/**
 * print_listint_safe - function  prints a linked list safely
 * @head: linked list to be printed
 *
 * Return: number of nodes in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head != 0)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		break;
		}
	}
	return (num);
}
