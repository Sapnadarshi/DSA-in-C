#include <stdio.h>

#define MAX_SIZE 100

void countFrequency(int arr[], int size)
{
    int i, j, count;

    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                // Replace the duplicate element with -1
                arr[j] = -1;
            }
        }
        // Print the frequency if the element is not a duplicate
        if (arr[i] != -1)
        {
            printf("Element %d occurs %d time(s)\n", arr[i], count);
        }
    }
}

int main()
{
    int arr[MAX_SIZE];
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    countFrequency(arr, size);

    return 0;
}
