#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_list - function that frees a linked list
* @head: a pointer to the head of the list
* Description: 'program uses free_list function'
* Return:
*/
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
