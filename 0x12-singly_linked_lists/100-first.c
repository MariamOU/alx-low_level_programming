#include <stdio.h>
/**
* my_function - function that prints a string
* Description: 'program uses my_function function'
* Return:
*/
void my_function(void) __attribute__((constructor));

void my_function(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
