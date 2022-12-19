#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @src: source to copy
 * @dst: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dst, char *src)
{
int i = 0;
while (*(src + i))
{
*(dst + i) = *(src + i);
i++;
}
*(dst + i) = '\0';
return (dst);
}
