#include "lists.h"

/**
 * free_listint2 - frees the linked list, and sets the head to NULL
 * @head: pointer to pointer to a linked list head
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}

}
