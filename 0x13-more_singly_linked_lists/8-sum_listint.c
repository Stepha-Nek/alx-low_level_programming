#include "lists.h"
/**
 * sum_listint - calculates sum of data in a linked list
 * @head: first node of a linked list
 *
 * Return: sum of data of linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != 0)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);

}
