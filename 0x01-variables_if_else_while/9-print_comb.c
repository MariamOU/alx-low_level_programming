#include<stdio.h>
/**
 * main - the entry function
 * Description: 'Program uses putchar'
 * Return: Alway 0 (SUCCESS)
 */
int main(void)
{
int c;

for (c = 0; c <= 8; c++)
{
putchar('0' + c);
putchar(',');
putchar(' ');
}
putchar('9' + '\n');
return (0);
}
