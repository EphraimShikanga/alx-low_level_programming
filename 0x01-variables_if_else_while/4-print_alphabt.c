#include <stdio.h>

/**
 * main - Entry point
 * Description:prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char waah;

	for (waah = 'a'; waah <= 'z'; waah++)
	{
		if (waah != 'e' && waah != 'q')
			putchar(waah);
	}
	putchar('\n');
	return (0);
}
