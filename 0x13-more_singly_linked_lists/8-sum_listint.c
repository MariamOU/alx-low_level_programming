
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - The function
 * @head: The first node of the list
 * Description: program uses the function sum_listint
 * Return: the sum of all data of a list or 0 if it's empty
*/
int sum_listint(listint_t *head)
{
int sum;

sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
