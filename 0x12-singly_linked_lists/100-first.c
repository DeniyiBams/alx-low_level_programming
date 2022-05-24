#include <stdio.h>
#include "lists.h"

/**
  * toPrint - print
  * void: no args
  * Return: void
  */

void toPrint(void) __attribute__ ((constructor));

void toPrint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
