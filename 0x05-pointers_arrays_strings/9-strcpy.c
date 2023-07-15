#include<stdlib.h>
#include "main.h"
/**
 * *_strcpy - the entry function
 * @dest: the variable dest
 * @src: the second variable src
 * Description: 'Program uses printf'
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = src;
*dest = *ptr;

printf("%s", dest);
printf("\n");
return (0);
}
