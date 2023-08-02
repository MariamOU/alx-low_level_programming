#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node_end - function that adds a node at the beginning of a linked list
* @head: a pointer to the head of the list
* @str: the input string
* Description: 'program uses *add_node_end function'
* Return: The new node added
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *NewNode;

if (str == NULL)
{
return (NULL);
}

NewNode = (list_t *)malloc(sizeof(list_t));
if (NewNode == NULL)
{
return (NULL);
}

NewNode->str = strdup(str);
if (NewNode->str == NULL)
{
free(NewNode);
return (NULL);
}

NewNode->next = NULL;

if (*head == NULL)
{
*head = NewNode;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = NewNode;
}
printf("[%lu] %s\n", strlen(NewNode->str), NewNode->str);
return (NewNode);
}
