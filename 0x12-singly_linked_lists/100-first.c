#include <stdio.h>
/**

before_main - This function prints a message before the main function is executed.
Return: void
*/
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
