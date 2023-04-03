#include "lists.h"
/**
 * pop_listint - deletes the first node of a linked list
 * @head: pointer to the first node of a linked list
 *
 * Return: Data in the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == 0 || *head == 0)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
