#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - The function
 * @h: Pointer to the head of the linked list
 * Return: The size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t compteur;
listint_t *current;
listint_t *temp;

compteur = 0;
current = *h;

while (current != NULL)
{
temp = current->next;
free(current);
compteur++;
current = temp;
}

*h = NULL;

return (compteur);
}
