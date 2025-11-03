#include <stdio.h>

int main(void)
{
    int x = 6;
    char y = 'e';
    float z = 1.9;

    int *p1 = &x;
    char *p2 = &y;
    float *p3 = &z;

    printf("\nInitial:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", (void*)p1, (void*)p2, (void*)p3);

    p1++;
    p2++;
    p3++;

    printf("\nAfter increment:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", (void*)p1, (void*)p2, (void*)p3);

    p1--;
    p2--;
    p3--;

    printf("\nAfter decrement:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", (void*)p1, (void*)p2, (void*)p3);

    printf("\n");

    return 0;
}
