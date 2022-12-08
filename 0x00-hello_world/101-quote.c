#include <stdio.h>
/**
 *main - Entry point
 *Description: changes the error message
 *Return: when succesful gives 1
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(err, 59, 1, stderr);
	return (1);
}

