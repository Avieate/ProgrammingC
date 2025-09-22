#include <stdio.h>

int main(void)
{
    int d, num = 1;

    for (int i = 1; i <= 3; i++)
    {
        for (d = 1; d <= 3 - i; d++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%i ", num);
            num++;
        }
        printf("\n");
    }
}
