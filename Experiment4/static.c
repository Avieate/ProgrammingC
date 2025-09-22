#include <stdio.h>

void modify()
{
    static int x = 7;

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
    modify();
}
