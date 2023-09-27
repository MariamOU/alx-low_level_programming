#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - The function
 * @head: The first node of the list
 * Description: program uses the function pop_listint
 * Return: the head node's data
*/
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL)
return (0);

data = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (data);
}
