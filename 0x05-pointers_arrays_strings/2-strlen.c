#include "main.h"
/**
 *_strlen - Entry point
 *@a: Parameter
 *Return: i
 */
int _strlen(char *a)
{
int i = 0;
while (*(a + i))
i++;
return (i);
}
