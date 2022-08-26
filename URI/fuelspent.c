#include<stdio.h>

int main()
{
    double time, speed, distance, fuel;
    scanf("%lf%lf", &time, &speed);

    distance = speed*time ;
    fuel = distance / 12;

    printf("%.3lf\n", fuel);

    return 0;

}
