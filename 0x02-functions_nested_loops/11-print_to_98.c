#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Entry point
 *Description: Prints numbers up to 98
 * @n: Parameter
 */
void print_to_98(int x)
{
while (x != 98)
{
printf("%i, ", x);
if (x > 98)
x--;
else
x++;
}
printf("98\n");
}
