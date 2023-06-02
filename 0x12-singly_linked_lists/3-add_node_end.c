#include "lists.h"

/**
 * _strlen - find the length of a string
 * @str: string
 *
 * Return: length
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - add new node to end of a list
 * @head: pointer to the list head
 * @str: data for new node
 *
 * Return: address of new element, or if failed NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp; /* create the new node */

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* malloc for the new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* set a node values */
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
