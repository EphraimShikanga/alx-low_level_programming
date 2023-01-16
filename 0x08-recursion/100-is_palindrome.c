#include "main.h"
/**
 *_strlen_recursion - Returns the length of a string
 *@s: String to be checked
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
/**
 *_check_palindrome - Checks if a string is a palindrome
 *@r: Right index
 *@l: Left index
 *@p: String being checked
 *Return: 1 or 0
 */
int _check_palindrome(int r, int l, char *p)
{
if (l >= r)
{
return (1);
}
else if (p[l] != p[r])
{
return (0);
}
else
{
return (_check_palindrome(r - 1, l + 1, p));
}
}
/**
 *is_palindrome - Check if string is palindrome
 *@s: String to be checked
 *Return: 0 or 1
 */
int is_palindrome(char *s)
{
int i = _strlen_recursion(s) - 1;
return (_check_palindrome(i, 0, s));
}
