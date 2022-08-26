#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,N5,sum,avrg,latest;
    scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);
    sum = (N1*2 + N2*3 + N3*4 + N4*1);
    avrg = sum / 10;
    printf("Media: %.1lf\n", avrg);

    if(avrg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avrg>=5.0 && avrg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &N5);
        printf("Nota do exame: %.1lf\n", N5);
        latest = (avrg + N5)/2.0;
        if(latest>5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(latest <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
         printf("Media final: %.1lf\n", latest);

    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
