#include "lists.h"

/**
 * add_nodeint_end - adds at the end of a list, a new node
 * @head: pointer to pointer to linked list head
 * @n: add this value to new node
 *
 * Return: address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node; /* link the last node to new node */
	}

	return (new_node);
}
