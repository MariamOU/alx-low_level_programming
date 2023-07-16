#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
 * _puts_recursion - the entry function
 * @s: the variable s
 * Description: 'Program uses printf'
 * Return: a string
 */
void _puts_recursion(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	printf(s[i]);
	i++;
}
	printf("\n");
}
