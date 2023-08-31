#include<stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - the entry function
 * @s: the character that is checked
 * Description: 'Program uses the function _print_rev_recursion'
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}

putchar(*s);
_print_rev_recursion(s - 1);
}
