#include "main.h"
/**
*_strspn - Checks characters in the first segment of a string
*@s: String to be checked
*@accept: String to be checked against
*Return: Number of matching characters
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
