#include "main.h"

/**
 * rev_string - reverses a string
 * @a: string to reverse
 *
 * Return: void
 */
void rev_string(char *a)
{
int i = 0, j = 0;
char str[500];
while (*(a + i))
{
*(str + i) = *(a + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(a + i) = *(str + j);
j++;
i--;
}
}
