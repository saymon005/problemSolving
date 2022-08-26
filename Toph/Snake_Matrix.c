#include<stdio.h>
int main()
{
    int n[20][20], i, j;
    scanf("%d",&n);
    for(i =0; i<= n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d", &n[i][j]);
        }
    }
}
