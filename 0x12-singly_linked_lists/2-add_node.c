#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node - function that adds a node at the beginning of a linked list
* @head: a pointer to the head of the linked list
* @str: the input string to be duplicated and stored
* Description: 'program uses *add_node function'
* Return: The address of the new node added or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
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
NewNode->next = *head;
*head = NewNode;
printf("[%lu] %s\n", strlen((*head)->str), (*head)->str);
return (NewNode);
}
