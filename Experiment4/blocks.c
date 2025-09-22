#include <stdio.h>

int main(void)
{
    int x = 7;

    x += 15;
    printf("%i\n", x);

    x *= 15;
    printf("%i\n", x);

    x -= 15;
    printf("%i\n", x);

    x /= 15;
    printf("%i\n", x);
}

int modify(void)
{
    x += 5;
    printf("%i\n", x);

    x *= 5;
    printf("%i\n", x);

    x -= 5;
    printf("%i\n", x);

    x /= 5;
    printf("%i\n", x);
}
