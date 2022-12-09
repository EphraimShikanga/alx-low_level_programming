#include <stdio.h>
/**
 *main - Entry point
 *Description: a program that prints the alphabet in lowercase, and then in
 *uppercase, followed by a new line
 *Return: Always 0 when Successfull
 */
int main(void)
{
	char es;
	char se;

	for (es = 'a'; es <= 'z'; es++)

{
	putchar(es);
}

	for (se = 'A'; se <= 'Z'; se++)
{
	putchar(se);
}
	putchar('\n');
	return (0);
}
