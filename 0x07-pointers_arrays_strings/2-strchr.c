#include "main.h"
/**
*_strchr - Locates a character in a string
*@c: Character to be located
*@s: String to be checked
*Return: Location of c
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
