#include<stdio.h>

int main()
{
    int i,n, a;
    scanf("%d", &n);
    for(i = 1; i<= n; i++)
    {
        a = n % i;
        if(a == 0)
    {
        printf("%d\n", i);
    }
    }



    return 0;
}
