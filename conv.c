#include <stdio.h>

int main(void)

{
    float c;

    printf("Celcius: ");
    scanf("%f", &c);

    float f = (c * 9 / 5) + 32;
    {
        printf("Fahrenhieit= %g\n", f);
    }
}
