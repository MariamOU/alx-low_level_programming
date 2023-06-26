#include<stdio.h>
#include "main.h"
/**
 * _isdigit - the entry function
 * @c: the character that is checked
 * Description: 'Program uses the function _isdigit'
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
