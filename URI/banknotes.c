#include<stdio.h>

int main()
{
    int N, r1, r2, r3, r4, r5, r6, r7;
    scanf("%d", &N);
    printf("%d\n", N);

    r1 = N/100;
    N = N%100;

    r2 = N/50;
    N = N%50;

    r3 = N/20;
    N = N%20;

    r4 = N/10;
    N = N%10;

    r5 = N/5;
    N = N%5;

    r6 = N/2;
    N = N%2;

    r7 = N/1;

    printf("%d nota(s) de R$ 100,00\n", r1);

    printf("%d nota(s) de R$ 50,00\n", r2);

    printf("%d nota(s) de R$ 20,00\n", r3);

    printf("%d nota(s) de R$ 10,00\n", r4);

    printf("%d nota(s) de R$ 5,00\n", r5);

    printf("%d nota(s) de R$ 2,00\n", r6);

    printf("%d nota(s) de R$ 1,00\n", r7);

    return 0;

}
