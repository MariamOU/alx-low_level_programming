#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - The function
 * @head: The first node of the list
 * @index: The index of the node that should be deleted
 * Description: program uses the function delete_nodeint_at_index
 * Return: 1 if succeeded and -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *current;
unsigned int compteur;

if (*head == NULL)
return (-1);

if (index == 0)
{

temp = (*head)->next;
free(*head);
*head = temp;
return (1);
}
current = *head;
compteur = 0;

while (current != NULL)
{
if (compteur == index - 1)
{

if (current->next == NULL)
return (-1);

temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
current = current->next;
compteur++;
}
return (-1);
}
