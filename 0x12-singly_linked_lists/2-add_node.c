#include "lists.h"

/**
 * _strlen - find the length of a string
 * @str: a string
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
 * add_node - add to the beginning of a linked list, a new node
 * @head: pointer to the linked list head
 * @str: string for a new node
 *
 * Return: address of new element, or null for failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* create a new node */

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* malloc for the new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* set new node values */
	new_node->len = _strlen(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node; /* set a head to point to the new node */

	return (new_node);
}


