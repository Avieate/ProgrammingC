#include <stdio.h>

int main(void)
{
    int size;

    printf("Size: ");
    scanf("%i", &size);

    int arr[size];

    for (int r = 0; r < size; r++)
    {
        scanf("%i", &arr[r]);
    }

    int first = arr[0], second;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    printf("%d\n", second);
    return 0;
}
