#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include "lists.h"

/**
 * list_len - function that counts the number of elements in a linked list
 * @h: the pointer to the first node in the linked list
 * Description: 'Program uses the function list_len'
 * return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t count;
const list_t *current = NULL;

count = 0;
current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
