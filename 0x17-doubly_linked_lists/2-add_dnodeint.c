#include "lists.h"

/**
 * add_dnodeint - Adds new head to the linked list
 * @head: the address of the head
 * @n: new node
 * Description: 'Program uses add_dnodeint()'                 
 * Return: the address of the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	}
	return (new);
}
