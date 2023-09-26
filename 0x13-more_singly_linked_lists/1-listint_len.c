#include <stddef.h>
#include "lists.h"

/**
 * listint_len - The function
 * @h: Elements of the list
 * Description: program uses the function listint_len
 * Return: The number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t compteur;

compteur = 0;

while (h != NULL)
{
compteur++;
h = h->next;
}
return (compteur);
}
