#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: the address of the head
 * Description: 'Program uses free_dlistint()'                 
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
