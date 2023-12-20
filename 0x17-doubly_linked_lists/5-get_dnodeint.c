#include "lists.h"

/**
 * get_dnodeint_at_index - return a node at an index
 * @head: the address of the head
 * @index: the index of node to return
 * Description: 'Program uses get_dnodeint_at_index()'                 
 * Return: the address of the node to return
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	while (head != NULL)
	{
		if (ind == index)
		return (head);
		head = head->next;
		ind++;
	}
	return (NULL);
}
