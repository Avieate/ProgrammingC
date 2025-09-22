#include <math.h>
#include <stdio.h>

int main(void)
{
    for (int a = 1; a <= 20; a++)
    {
        for (int b = a + 1; b <= 20; b++)
        {
            int x = pow(a, 3) + pow (b, 3);

            for (int c = a + 1; c <= 20; c++)
            {
                for (int d = c + 1; d <= 20; d++)
                {
                    int y = pow(c, 3) + pow(d, 3);

                    if (x == y)
                    {
                        printf("%i ", x);
                    }
                }
            }
        }
    }
    printf("\n");
}
