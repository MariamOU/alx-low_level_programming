#include <stdio.h>
#include<string.h>
#include "lists.h"


/**
 * print_listint - The function
 * @h: Elements of the list
 * Description: program uses the function print_listint
 * Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t compteur;

compteur = 0;

while (h != NULL)
{
printf("%d\n", h->n);
compteur++;
h = h->next;
}

return (compteur);
}
