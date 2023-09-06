#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * *_strdup - check the code
 * @str: A string
 * Description: 'Program uses *_strdup function'
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}

size_t len = strlen(str);

char *duplicate = (char *)malloc((len + 1) * sizeof(char));

if (duplicate == NULL)
{
return (NULL);
}

strcpy(duplicate, str);

return (duplicate);
}
