#include<stdio.h>
#include "main.h"
/**
 * times_table - the entry function
 * Description: 'Program uses the function times_table'
 * Return: different values of a
 */
void times_table(void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*0);
		}	
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a);
		}	
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*2);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*3);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*4);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*5);
		}
		printf("\n");
		for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*6);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*7);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d, ", a*8);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%d", a*9);
		}	
}
