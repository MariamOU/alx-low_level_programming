#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - The function
 * @name: The name to be printed
 * @f: The function pointer
 * Description: Uses print_name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
{
f(name);
}
}
