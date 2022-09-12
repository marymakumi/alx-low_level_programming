#include <stdio.h>

/**
 *main- prints the various type sizes
 *Return: Always 0 (success)
 *
 */

int main(void)

{
	("size of a char: %ld byte(s)\n", sizeof(char));
	("size of an int: %ld byte(s)\n", sizeof(int));
	("size of a long int: %ld bytes(s)\n", sizeof(long));
	("size of a long long int: %ld byte(s)\n", sizeof(long long));
	("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
