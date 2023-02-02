#include "main.h"
/**
 *find_sqrt - Find the squareroot by checking if a number is applicable
 *@n: Number to get squareroot of
 *@g: Guessing parameter
 *Return: Square root or -1
 */
int find_sqrt(int n, int g)
{
if (g * g == n)
{
return (g);
}
else if (g * g > n)
{
return (-1);
}
return (find_sqrt(n, g + 1));
}
/**
 *_sqrt_recursion - Finds the square root of a number
 *@n: Number to find square root
 *Return: square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (find_sqrt(n, 1));
}
