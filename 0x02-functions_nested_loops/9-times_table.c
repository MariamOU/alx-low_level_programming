#include<stdio.h>
#include "main.h"
/**
 * times_table - the entry function
 * Description: 'Program uses the function times_table'
 * Return: different values of a
 */
void times_table(void)
{
  float a;

	for (a = 0; a <= 9; a++)
		{
			printf("%0.2f, ", a*0);
		}	
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a);
		}	
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*2);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*3);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*4);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*5);
		}
		printf("\n");
		for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*6);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*7);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*8);
		}
		printf("\n");
	for (a = 0; a <= 9; a++)
		{
			printf("%f, ", a*9);
		}	
}
