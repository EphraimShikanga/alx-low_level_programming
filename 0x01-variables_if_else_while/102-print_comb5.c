#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers.
 * @for: loops until a condition is met
 * @if: checks if a condition is met before continuing
 * @putchar: gives the output
 * Return: Always 0 when succesfull and 1 when wrong
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');
		if (n1 == 98 && n2 == 99)
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
