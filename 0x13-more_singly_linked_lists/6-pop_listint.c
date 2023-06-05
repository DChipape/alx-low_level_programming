#include "lists.h"

/**
 * pop_listint - deletes the linked list head node
 * @head: pointer to pointer to linked list head
 * Return: linked list head data, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	data = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (data);

}
