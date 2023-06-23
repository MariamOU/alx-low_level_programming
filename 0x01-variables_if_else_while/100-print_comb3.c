#include<stdio.h>
/**
 * main - the entry function
 * Description: 'Program uses putchar'
 * Return: Alway 0 (SUCCESS)
 */
int main(void)
{
int c;
int d;

for (c = 0; c <= 9; c++)
{
	for (d = 0; d <= 9; d++)
	{
		if (c != d)
			{
				putchar('0' + c + d);
				if (c != 9)
					{
						putchar(',');
						putchar(' ');
					}
			}
	}
putchar('\n');
return (0);
}
}
