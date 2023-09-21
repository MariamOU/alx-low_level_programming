#include<stddef.h>
#include<stdio.h>
#include "lists.h"

/**
 * print_list - The function that prints the elements of a list
 * @h: Elements of the list
 * Description: program uses the function print_list
 * Return:The number of nodes in a list
*/
size_t print_list(const list_t *h)
{
size_t num_nodes;

num_nodes = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}

num_nodes++;
h = h->next;
}
return (num_nodes);
}
