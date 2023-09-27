#include<stddef.h>
#include "lists.h"
/**
 * *reverse_listint - The function
 * @head: The first node of the list
 * Description: program uses the function *reverse_listint
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous;
listint_t *current;
listint_t *next;

previous = NULL;
current = *head;

while (current != NULL)
{
next = current->next;
current->next = previous;
previous = current;
current = next;
}
*head = previous;

return (*head);
}
