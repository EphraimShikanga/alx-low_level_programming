#include "main.h"
/**
 *factorial - Calculates the factorial of a number
 *@n: Number whose factorial is calculated
 *Return: Factorial
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
