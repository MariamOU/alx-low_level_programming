#include "lists.h"

/**
 * sum_dlistint - adds the elements of a linked list
 * @head: the address of the head
 *
 * Description: 'Program uses sum_dlistint()'                 
 * Return: sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
