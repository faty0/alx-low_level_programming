#include "lists.h"

void pre_main(void) __attribute__((constructor));
/**
 *pre_main - Prints a sentence before main
 */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
