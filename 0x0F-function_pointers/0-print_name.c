#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - the function pointer
 * @name: the added name
 * @f: pointer to function
 * Description: 'Program uses print_name'
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
{
return;
}
else
{
f(name);
}
}
