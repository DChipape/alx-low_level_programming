#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of the linked list
 * @head: pointer to the linked list head
 * @index: index of a node
 *
 * Return: nth node of a list, or NULL if failed
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}
