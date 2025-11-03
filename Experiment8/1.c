#include <stdio.h>

int main(void)
{
    int a = 11;
    float b = 27.4;
    char c = 'V';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("\nVariables' values:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);

    printf("Pointers' values:\n");
    printf("*ptr_int = %d\n", *ptr_int);
    printf("*ptr_float = %.2f\n", *ptr_float);
    printf("*ptr_char = %c\n", *ptr_char);

    printf("\n");

    return 0;
}
