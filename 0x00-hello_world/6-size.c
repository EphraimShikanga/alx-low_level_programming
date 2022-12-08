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
	printf("size of a char: %ld\n byte(s)", sizeof(char));
	printf("size of an int: %ld\n byte(s)", sizeof(int));
	printf("size of a long int: %li\n byte(s)", sizeof(long int));
	printf("size of a long long int: %li\n byte(s)", sizeof(long long int));
	return (0);
}
