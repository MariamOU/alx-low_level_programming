#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include "lists.h"

/**
 * list_len - function that counts the number of elements in a linked list
 * @h: the pointer to the first node in the linked list
 *
 * return: the number of elements in list_t
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

const list_t *current = NULL;
current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
