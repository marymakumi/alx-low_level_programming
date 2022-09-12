#include<stdio.h>

/**
 * main - Entrypoint
 * Remove: exit point
 *
 */

int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}