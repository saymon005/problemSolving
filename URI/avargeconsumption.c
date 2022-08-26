#include<stdio.h>

int main()
{
    double X, Y, AVARAGE;
    scanf("%lf%lf", &X, &Y);
    AVARAGE = X/ (double)Y;

    printf("%.3lf km/l", AVARAGE);

    return 0;
}
