#include<stdio.h>

int main()
{
    int n, i, num;
    double avrg, sum = 0.0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {


        scanf("%d", &num);
        sum = sum + num;



        avrg = sum/i;

        printf("%lf \n", avrg);




    }


    return 0;
}
