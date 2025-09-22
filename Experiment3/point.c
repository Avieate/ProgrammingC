#include <stdio.h>

int main(void)
{
    int x1, x2, x3, y1, y2, y3;

    printf("Enter First Point (Format: x1, y1): ");
    scanf("%i, %i", &x1, &y1);

    printf("Enter Second Point (Format: x2, y2): ");
    scanf("%i, %i", &x2, &y2);

    printf("Enter Third Point (Format: x3, y3): ");
    scanf("%i, %i", &x3, &y3);

    float area = (0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));

    if (area == 0)
    {
        printf("The points are colinear.\n");
    }
    else
    {
        printf("The points aren't colinear.\n");
    }
}
