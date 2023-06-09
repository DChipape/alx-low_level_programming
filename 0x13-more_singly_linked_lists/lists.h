#ifndef LISTS_H
#define LISTS_H


#include <string.h> /* size_t */
#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc, free */


/**
 * struct listint_s - singly linked list
 * @n: pointer to an integer
 * @next: points to a next node
 *
 * Description: structure of a singly linked list node
 * for ALX project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototypes */

void free_listint2(listint_t **head);
size_t print_listint(const listint_t *h);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
int pop_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
listint_t *find_listint_loop(listint_t *head);
listint_t *reverse_listint(listint_t **head);
size_t free_listint_safe(listint_t **h);

#endif
