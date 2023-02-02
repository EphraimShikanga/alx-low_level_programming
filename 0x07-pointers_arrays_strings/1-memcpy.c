#include "main.h"
/**
 *_memcpy - Copies n bytes from src and puts them in dest
 *@dest: Destination
 *@src: Source
 *@n: Bytes copied
 *Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
