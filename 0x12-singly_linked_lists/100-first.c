#include "lists.h"
/**
 * executfirts - execute function before main in c
*/
void executfirts(void) __attribute__ ((constructor));

void executfirts(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
