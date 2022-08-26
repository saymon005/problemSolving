#include<stdio.h>

int main()
{
    double n, i, count = 0;
    for(i = 1; i<= 6; i++)
    {
        scanf("%lf", &n);
        if(n > 0)
        {
            count++;
        }
    }
    printf("%.0lf valores positivos \n", count);

    return 0;
}
