#include<stdio.h>


int main()
{
    int i,n, a,j = 0;
    scanf("%d", &n);
    for(i = 1; i<n; i++)
    {
        a = n % i;
        if(a == 0)
    {
       j++;
    }
    }
    printf("%d", j);

    return 0;
}
