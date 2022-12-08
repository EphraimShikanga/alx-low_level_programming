#include <stdio.h>
/**
 * main-Entry point
 * Description-gives the size of data types
 * @sizeof()-returns the size of each data type in c
 * @printf()-returns the line given
 * Return: when succesfull returns 0
*/
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
