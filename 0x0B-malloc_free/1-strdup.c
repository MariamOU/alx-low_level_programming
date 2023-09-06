#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "main.h"
/**
 * *_strdup - check the code
 * @str: A string
 * Description: 'Program uses *_strdup function'
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
size_t len;

if (str == NULL)
{
return (NULL);
}

len = strlen(str);

char *duplicate = (char *)malloc((len + 1) * sizeof(char));

if (duplicate == NULL)
{
return (NULL);
}

strcpy(duplicate, str);

return (duplicate);
}
