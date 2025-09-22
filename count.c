#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char n[32];
    int pos = 0, neg = 0, zero = 0;

    do
    {
        printf("Enter Number (Type S to cease): ");
        scanf("%s", n);

        if (n[0] == 'S' || n[0] == 's')
        {
            break;
        }

        int num = atoi(n); // converts string to integer

        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    while (1);

    printf("Positive: %i\nNegative: %i\nZero: %i\n", pos, neg, zero);
}
