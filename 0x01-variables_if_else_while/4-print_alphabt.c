#include <stdio.h>

/**
 * main - prints alphabets in lowercase,
 * followed by a new line, ecept q and e
 * Return: 0 to exit
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
