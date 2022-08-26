#include<stdio.h>
#include<math.h>

int main()
{
    double R, A;
    scanf("%lf", &R);

    A = 3.14159 * pow(R, 2);

    printf("A=%.4lf\n", A);

    return 0;
}
