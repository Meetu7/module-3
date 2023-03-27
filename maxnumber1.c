// Write a program to find out the max number from given array using function;

#include <stdio.h>
int find_max(int arr[], int size);

int main()
{
    int arr = [ 1, 2, 3, 4, 5, 6, 7 ];
    int size = sizeof(arr);
    int max = find_max(arr, size);

    printf("The maximum numbers is :%d", max);

    return 0;
}

int find_max(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}