#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - The function that adds a new node at the beg of a list
 * @head: the first node of the list
 * @str: pointer for duplication
 * Description: program uses the function *add_node
 * Return:The new node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);

if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
