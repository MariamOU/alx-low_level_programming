#include "lists.h"

/**
 * add_dnodeint_end - Adds new node to the end of the linked list
 * @head: the address of the head
 * @n: new node
 * Description: 'Program uses add_dnodeint_end()'                 
 * Return: the address of the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *node;
	
	new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n; 
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
		node = node->next;

		node->next = new;
		new->prev = node;
	}
	return (new);
}
