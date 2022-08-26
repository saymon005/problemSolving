#include<stdio.h>
#include<stdlib.h>

int main()
{
    double x, y,z, TOTAL;
    char s[20];
    gets(s);
    scanf("%lf%lf", &x, &y);

    z = y*0.15;

    TOTAL = (x + z);
    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
