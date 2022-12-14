#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Return: zero(0)
 */
void print_alphabet_x10(void)
{
char w;
int q;
for (q = 0; q <= 9; q++)
{
for (w = 'a'; w <= 'z'; w++)
{
_putchar(w);
}
_putchar('\n');
}
}