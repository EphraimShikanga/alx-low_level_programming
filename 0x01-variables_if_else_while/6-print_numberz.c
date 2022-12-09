#include<stdio.h>

/**
 * main - Entry point
 * Description:prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nc;

	for (nc = 48; nc <= 57; nc++)
		putchar(nc);
	putchar('\n');
	return (0);
}
