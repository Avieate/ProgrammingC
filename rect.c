#include <stdio.h>

int main(void)

{
    int l, w;

    do
    {
        printf("Length: ");
        scanf("%i", &l);
    }
    while (l < 0);

    do
    {
        printf("Width: ");
        scanf("%i", &w);
    }
    while (w < 0);

    {
        printf("Area= %i\nPerimeter= %i\n", l * w, 2 * (l + w));
    }
}
