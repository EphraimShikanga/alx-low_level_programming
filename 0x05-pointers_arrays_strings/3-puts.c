#include "main.h"
/**
 *_puts - Entry point
 *@str: Parameter
 *Return: nothing
 */
void _puts(char *str)
{
int x = 0;
while (*(str + x))
{
_putchar(*(str + x));
x++;
}
_putchar('\n');
}
