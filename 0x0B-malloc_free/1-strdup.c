#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function returns a pointer to a newly allocated space
 * @str: the string str
 * Description: 'Program uses *_strdup'
 * Return: a pointer
 */
char *_strdup(const char *str)
{
char *duplicate;
  
if (str == NULL)
{
return (NULL);
}
duplicate = (char *)malloc(strlen(str) + 1);

if (duplicate != NULL)
{
strcpy(duplicate, str);
}
return (duplicate);
}
