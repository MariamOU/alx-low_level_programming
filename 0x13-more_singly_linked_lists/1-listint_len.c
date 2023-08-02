#include <stddef.h>
#include "lists.h"

/**
* listint_len - function that counts the number of elements in a linked list
* @h: a pointer to the head of the list
* Description: 'program uses listint_len function'
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
size_t count;
const listint_t *ptr;

count = 0;
ptr = h;

while (ptr != NULL)
{
count++;
ptr = ptr->next;
}

return (count);
}
