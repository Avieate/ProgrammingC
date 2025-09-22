#include <stdio.h>

int main(void)
{
    for (int r = 1; r <= 5; r++)
    {
        for (int s = 1; s <= 5 - r; s++)
        {
            printf(" ");
        }
        int i = 1;
        for (int n = 1; n <= r; n++)
        {
            printf("%i ", i);
            i = i * (r - n) / n;
        }
        printf("\n");
    }
}
