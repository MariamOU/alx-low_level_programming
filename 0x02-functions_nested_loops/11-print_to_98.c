#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - the entry function
 * @n: the character that is checked
 * Description: 'Program uses the function print_to_98'
 * Return: different values of n
 */
void print_to_98(int n)
{
	if (n <= 98)
		{	
			for (; n <= 98; n++)
				{
					if (n == 98)
						{
							printf("%d ", n);
						}
					else
						{
							printf("%d, ", n);
							printf(" ");
						}
				}
		}
	else if (n == 98)
		{
			printf("%d ", n);
		}
	else if (n >= 98)
		{
			for (; n >= 98; n--)
				{
					if (n == 98)
						{
							printf("%d ", n);
						}
	else
		{
			printf("%d, ", n);
			printf(" ");
		}
				}
		}
}
