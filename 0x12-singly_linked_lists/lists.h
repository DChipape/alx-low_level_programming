#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */
#include <stdio.h> /* size_t, printf */

/**
 * struct list_s - sructure for linked list
 * @str: string stored in a node
 * @len: length of the string in a node
 * @next: pointer to the next node
 *
 * Description: node structure for the singly linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* prototypes for all files */
void free_list(list_t *head);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
