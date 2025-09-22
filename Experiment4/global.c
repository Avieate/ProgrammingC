#include <stdio.h>

int x = 7;

void modify()
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

int main(void)
{
    printf("%i", x);

    modify();
}

