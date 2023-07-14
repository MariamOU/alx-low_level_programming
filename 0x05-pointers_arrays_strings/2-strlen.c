#include<stdlib.h>
#include "main.h"
/**
 * main - the entry function
 * Description: 'Program uses putchar'
 * Return: Alway 0 (SUCCESS)              
 */
int _strlen(char *s)
{
  s = &s;
  *s = strlen(s);
  _putchar("0" + *s);
}
