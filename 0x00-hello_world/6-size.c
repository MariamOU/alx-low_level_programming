#include<stdio.h>
/**                                                                                                                                                         
 * main - the entry function                                                                                                                                
 * Description: 'Program that uses printf'                                                                                                                  
 * Return: Always 0 (Success)                                                                                                                               
 */
int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(short int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lld byte(s)\n", sizeof(double));   
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
