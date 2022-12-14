#include <stdio.h>

/**
 * main - Entry point
 * Description: prints natural numbers multiples of 3 or 5 to 1024
 * Return: always 0 when success
 */

int main(void)
{
int q, t, f, m, x;
q = 0;
for (t = 0; t <= (1024 / 3); t++)
{
m = 3 * t;
q = q + m;
}
for (f = 0; f <= (1024 / 5); f++)
{
if (!(f % 3 == 0))
{
x = 5 * f;
q = q + x;
}
}
printf("%i\n", q);
return (0);
}
