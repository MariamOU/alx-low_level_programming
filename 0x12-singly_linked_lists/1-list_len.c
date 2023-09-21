#include <stddef.h>
#include<stdio.h>
#include "lists.h"

/**
 * list_len - The function
 * @h: Elements of the list
 * Description: program uses the function list_len
 * Return:The number of nodes in a list
*/
size_t list_len(const list_t *h)
{
size_t num_nodes;

num_nodes = 0;

while (h != NULL)
{
num_nodes++;
h = h->next;
}

return (num_nodes);
}
