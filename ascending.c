/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice
*/
#include <stdio.h>

void print_array(int arr[], int size);
void bubble_sort(int arr[], int size, int order);

int main()
{
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    int i;

    printf("Enter the elements of the first array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int order;
    printf("Enter the order in which to sort the arrays (0 for ascending, 1 for descending): ");
    scanf("%d", &order);

    printf("Before sorting:\n");
    printf("First array: ");
    print_array(arr1, size);
    printf("Second array: ");
    print_array(arr2, size);

    bubble_sort(arr1, size, order);
    bubble_sort(arr2, size, order);

    printf("After sorting:\n");
    printf("First array: ");
    print_array(arr1, size);
    printf("Second array: ");
    print_array(arr2, size);

    return 0;
}

void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int size, int order)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if ((order == 0 && arr[j] > arr[j + 1]) || (order == 1 && arr[j] < arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
}
