#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - The function
 * @head: The first node of the list
 * @idx:the index of the list where the new node should be added
 * @n: The input integer
 * Description: program uses the function *insert_nodeint_at_index
 * Return: the address of the new node or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
unsigned int compteur;
listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
current = *head;
compteur = 0;

while (current != NULL)
{
if (compteur == idx - 1)
{

new_node->next = current->next;
current->next = new_node;
return (new_node);
}

current = current->next;
compteur++;
}

free(new_node);
return (NULL);
}
