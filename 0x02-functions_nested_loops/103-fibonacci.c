#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints fibonacci numbers
 * Return: always 0 when success
 */
int main(void)
{
unsigned int q, w, e, r, t;
q = 1;
w = 2;
e = 3;
r = 2;
for (r = 2; r <= 32; r++)
{
if (e % 2 == 0)
t = t + e;
q = w;
w = e;
e = q + w;
}
printf("%u\n", t);
return (0);
}
