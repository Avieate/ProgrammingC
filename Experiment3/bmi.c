#include <stdio.h>

int main(void)
{
    float w, h, bmi;

    do
    {
        printf("Enter Height (in Meters): ");
        scanf("%f", &h);
    }
    while (h < 0);

    do
    {
        printf("Enter Weight (in KGs): ");
        scanf("%f", &w);
    }
    while (w < 0);

    {
        bmi = w / (h * h);
        printf("BMI: %g\n", bmi);

        if (bmi <= 15)
        {
            printf("Starvation.\n");
        }
        else if (15 < bmi && bmi <= 17.5)
        {
            printf("Anorexic.\n");
        }
        else if (17.5 < bmi && bmi <= 18.5)
        {
            printf("Underweight.\n");
        }
        else if (18.5 < bmi && bmi < 25)
        {
            printf("Ideal.\n");
        }
        else if (25 <= bmi && bmi < 30)
        {
            printf("Overweight.\n");
        }
        else if (30 <= bmi && bmi < 40)
        {
            printf("Obese.\n");
        }
        else if (40 <= bmi)
        {
            printf("Morbidly Obese.\n");
        }
    }
}
