#include <stdio.h>
#include <math.h> 

int main()
{
    double base, expo, power;

    /* Input two numbers from user */
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &expo);

    /* Calculates base^expo */
    power = pow(base, expo);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, expo, power);

    return 0;
}
