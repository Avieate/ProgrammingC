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

    int pos = 0, neg = 0, odd = 0, even = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive: %i\n", pos);
    printf("Negative: %i\n", neg);
    printf("Odd: %i\n", odd);
    printf("Even: %i\n", even);
}
