#include <stdio.h>

int sumArray(int arr[], int index, int size)
{
    printf("Entering sumArray with index = %d, size = %d\n", index, size);

  
    if (index == size)
    {
        return 0;
    }

   
    int sum = arr[index] + sumArray(arr, index + 1, size);

   
    printf("sumArray(index = %d, size = %d) returning: sum = %d\n",
           index, size, sum);

    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int total = sumArray(arr, 0, size);

    printf("Sum of array elements: %d\n", total);

    return 0;
}
