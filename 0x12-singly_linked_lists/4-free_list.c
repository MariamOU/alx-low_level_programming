#include <stdlib.h>
#include "lists.h"
/**
 * free_list - The function that frees list
 * @head: the first node of the list
 * Description: program uses the function free_list
 * Return:nothing
*/
void free_list(list_t *head)
{
while (head != NULL)
{
list_t *temp;

temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
