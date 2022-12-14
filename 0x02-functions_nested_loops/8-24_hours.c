#include "main.h"
/**
 *jack_bauer - Entry point
 *Description: counter
 *Return: Always 0
 */
void jack_bauer(void)
{
int q, w, e, r, t, y;
for (q = 0; q < 24; q++)
{
e = q / 10;
r = q % 10;
for (w = 0; w < 60; w++)
{
t = w / 10;
y = w % 10;
_putchar('0' + e);
_putchar('0' + r);
_putchar(':');
_putchar('0' + t);
_putchar('0' + y);
_putchar('\n');
}
}
}
