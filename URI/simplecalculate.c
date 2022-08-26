#include<stdio.h>

int main()
{
    double code1,  unit1, price1, total;
    double code2, unit2, price2;
    scanf("%lf%lf%lf", &code1, &unit1, &price1);
    scanf("%lf%lf%lf", &code2, &unit2, &price2);

    total = ((unit1*price1) + (unit2*price2));

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;

}
