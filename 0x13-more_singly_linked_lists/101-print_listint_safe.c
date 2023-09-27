#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - The function
 * @head: Pointer to the head of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t compteur;

compteur = 0;

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
compteur++;

if (head <= head->next)
{

printf("-> [%p] %d\n", (void *)head->next, head->next->n);
exit(98);
}
head = head->next;
}

return (compteur);
}
