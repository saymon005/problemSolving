#include<stdio.h>

int main()
{
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;
    double N;
    scanf("%lf", &N);
    int n = N;
    int moedas = (N - n)* 100;
    if((moedas * 1000)% 10 == 9)
    {
        moedas++;
    }

    r1 = n/100;
    n = n%100;

    r2 = n/50;
    n = n%50;

    r3 = n/20;
    n = n%20;

    r4 = n/10;
    n = n%10;

    r5 = n/5;
    n = n%5;

    r6 = n/2;
    n = n%2;

    r7 = n/1;
    n = n%1;

    r8 = moedas/50;
    moedas = moedas%50;

    r9 = moedas/25;
    moedas = moedas%25;

    r10 = moedas/10;
    moedas = moedas%10;

    r11 = moedas/5;
    moedas = moedas%5;

    r12 = moedas/1;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", r1);

    printf("%d nota(s) de R$ 50.00\n", r2);

    printf("%d nota(s) de R$ 20.00\n", r3);

    printf("%d nota(s) de R$ 10.00\n", r4);

    printf("%d nota(s) de R$ 5.00\n", r5);

    printf("%d nota(s) de R$ 2.00\n", r6);


    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", r7);
    printf("%d moeda(s) de R$ 0.50\n", r8);
    printf("%d moeda(s) de R$ 0.25\n", r9);
    printf("%d moeda(s) de R$ 0.10\n", r10);
    printf("%d moeda(s) de R$ 0.05\n", r11);
    printf("%d moeda(s) de R$ 0.01\n", r12);

    return 0;

}
