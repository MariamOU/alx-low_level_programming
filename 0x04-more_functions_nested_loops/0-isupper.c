#include<stdio.h>
#include "main.h"
/**
 * _isupper - the entry function
 * @c: the character that is checked
 * Description: 'Program uses the function _isupper'
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);	
	}
}
