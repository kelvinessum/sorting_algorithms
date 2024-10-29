#include <stdio.h>

void print_array(int *array, size_t size)
{
        for (size_t i = 0; i < size; i++)
        {
                printf("%d", array[i]);
                if (i < size - 1)
                        printf(", ");
        }
        printf("\n");
}

void bubble_sort(int *array, size_t size)
{
        if (array == NULL || size < 2)
                return;

        for (size_t i = 0; i < size - 1; i++)
        {
                for (size_t j = 0; j < size - i - 1; j++)
                {
                        if (array[j] > array[j + 1])
                        {
                                int temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                                print_array(array, size);  // Print array after each swap
                        }
                }
        }
}
