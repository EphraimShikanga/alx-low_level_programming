#include <stdio.h>

/**
 * main - Entry point
 * Descriptor:prints the lowercase alphabet in
 * reverse, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
