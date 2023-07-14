#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers by dividing the search interval in half each time
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: element being searched for
 * Return: index of the value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
    int left = 0, right = size - 1, mid = 0;
    if (array == NULL)
        return (-1);
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i != right)
                printf(", ");
        }
        printf("\n");
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (-1);
}