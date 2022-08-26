#include<stdio.h>

int main()
{
    int n;
    double hour, per_hour, SALARY;
    scanf("%d", &n);
    scanf("%lf%lf",&hour, &per_hour);

    SALARY = (hour * per_hour);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf", SALARY);

    return 0;
}
