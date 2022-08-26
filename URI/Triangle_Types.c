#include<stdio.h>
int main()
{
    double A, B, C, k,m,n;
    scanf("%lf%lf%lf", &A, &B, &C);
    k = pow(A,2);
    m = pow(B,2);
    n = pow(C,2);
    if (A >= B + C)
    {
    printf("NAO FORMA TRIANGULO\n");
    }

    else if (A==B && B==C&& A==C)
    {
        if ( k == m + n)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (k > m + n)
    {
        printf("TRIANGULO OBTUSANGULO\n");

    }
    else if (k < m + n)
    {
       printf("TRIANGULO ACUTANGULO\n");
    }
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==B || A==C|| B== C)
    {
        if ( k == m + n)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (k > m + n)
    {
        printf("TRIANGULO OBTUSANGULO\n");

    }
    else if (k < m + n)
    {
       printf("TRIANGULO ACUTANGULO\n");
    }
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
