#include <stdio.h>

/**
 * main - Entry point
 * Descriptor:prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x, y;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
