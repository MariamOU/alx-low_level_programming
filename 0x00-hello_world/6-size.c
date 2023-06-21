#include<stdio.h>
int main(void)
{
char charType;
int intType;
float floatType;
double doubleType;
printf("The size of char is: %zu byte\n", sizeof(charType));
printf("The size of integer is: %zu bytes\n", sizeof(intType));
printf("The size of float is: %zu bytes\n", sizeof(floatType));
printf("The size of double is: %zu bytes\n", sizeof(doubleType));   
return (0);
}
