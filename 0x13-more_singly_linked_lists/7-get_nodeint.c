#include <stdlib.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - The function
 * @head: The first node of the list
 * @index: The index of the node
 * Description: program uses the function *get_nodeint_at_index
 * Return: the nth node of the linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int compteur;

compteur = 0;

while (head != NULL)
{
if (compteur == index)
return (head);

head = head->next;
compteur++;
}
return (NULL);
}
