
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - The function
 * @head: The first node of the list
 * @n: The input integer
 * Description: program uses the function *add_nodeint
 * Return: The number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

new_node->next = *head;

*head = new_node;

return (new_node);
}
