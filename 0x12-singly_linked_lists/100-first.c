#include <stdio.h>

/**
 * before_main -  prints
 * You're beat! and yet, you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
 *
 * Return: always 0
 */
void __attribute__((constructor)) before_main();

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

