#include <stdio.h>
#include "lists.h"

/**
 * print_list- function to print list
 * @h: the pointer to the head of the linked list
 * Description: 'Program uses print_list'
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *current = NULL ;
size_t count = 0;

current = h;
while (current != NULL)
{
if (current->str != NULL)
{
printf("[%d] %s ", current->len, current->str);
printf("\n");
}
else
{
printf("[%ld] (nil)", count);
printf("\n");
}
current = current->next;
count++;
}
return (count);
}
