#include<stdio.h>
/**                                                                                                                                                         
 * main - the entry function                                                                                                                                
 * Description: 'Program uses putchar'                                                                                                                      
 * Return: Alway 0 (SUCCESS)                                                                                                                                
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}