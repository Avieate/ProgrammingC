#include <stdio.h>

int main(void)
{
    int size;

    printf("Size: ");
    scanf("%i", &size);

    int arr[size];

    for (int r = 0; r < size; r++)
    {
        scanf("%d", &arr[r]);
    }
    float num;
    int freq = 0;

    printf("Search for: ");
    scanf("%f", &num);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            freq++;
        }
    }

    printf("Frequency= %i\n", freq);
}
