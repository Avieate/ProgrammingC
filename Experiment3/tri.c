#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Lengths: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if ((a == b) && (a == c) && (b == c))
        {
            printf("Equilateral\n");
        }
        else if ((b == c) || (a == b) || (a == c))
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalene\n");
        }
    }
    else
    {
        printf("Invalid Triangle.\n");
    }
}
