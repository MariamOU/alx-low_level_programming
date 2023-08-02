#include <stdio.h>
#include "lists.h"

/**
* print_listint - function that adds a node at the beginning of a linked list
* @h: a pointer to the head of the list
* Description: 'program uses print_listint function'
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count;
const listint_t *ptr;

count = 0;
ptr = h;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
count++;
ptr = ptr->next;
}
return (count);
}
