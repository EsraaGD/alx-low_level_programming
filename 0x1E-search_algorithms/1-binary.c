#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
    size_t left, right, mid, i;

    if (array == NULL) {
        return -1; /* Array is NULL, return -1 */
    }

    left = 0;
    right = size - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;
        printf("Searching in subarray: ");
        for (i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            return mid; /* Found the value, return its index */
        } else if (array[mid] < value) {
            left = mid + 1; /* Search in the right half */
        } else {
            right = mid - 1; /* Search in the left half */
        }
    }

    return -1; /* Value not found, return -1 */
}
