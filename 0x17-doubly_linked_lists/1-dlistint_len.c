#include "lists.h"

/**
 * dlistint_len - returns the length of the linked list dlist
 * @h: the address of the head
 * 
 * Description: 'Program uses dlistint_len()'                 
 * Return: the length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
