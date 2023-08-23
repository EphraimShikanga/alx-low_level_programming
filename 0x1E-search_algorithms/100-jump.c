#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array by jumping ahead by sqrt of size
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, step;

    if (array == NULL || size == 0)
        return (-1);
    
    step = sqrt(size);
    i = jump = 0;

    while (jump < size && array[jump] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", i, jump);
    jump = jump < size ? jump : size - 1;
    while (i < jump && array[i] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i++;
    }
    printf("Value checked array[%lu] = [%d]\n", i, array[i]);

    return (array[i] == value ? (int)i : -1);

}