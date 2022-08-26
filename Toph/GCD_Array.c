#include<stdio.h>
int main()
{
    int n, i,j,k;
    k = 3;
    scanf("%d",&n);
    printf("2 ");
    for(i = 2; i <= n; k++)
    {
        for(j = 2; j < k; j++)
        {
            if(k%j == 0)
                break;
        }
        if(j == k)
        {
            printf("%d ", k);
            i++;
        }
    }
    return 0;
}
