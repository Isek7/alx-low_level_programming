#include <stdio.h>

/**
 * bmain - function is executed before the main
 * Return: no return
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
