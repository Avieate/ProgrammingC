#include <stdio.h>

void modVal(int *a, int *b)
{
    *a = *a + 2;
    *b = *b * 9;
}

int main()
{
    int x = 6;
    int y = 1;

    printf("\nBefore modification:\n");
    printf("x = %d, y = %d\n", x, y);

    modVal(&x, &y);

    printf("\nAfter modification:\n");
    printf("x = %d, y = %d\n", x, y);

    printf("\n");

    return 0;
}

