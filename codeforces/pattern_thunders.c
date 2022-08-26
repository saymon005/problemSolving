#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("#");
        }

    printf("\n");
    }
    for(int d=1;d<=(2*n-1);d++)
        printf("#");
    printf("\n");
    for(int a=1;a<=n;a++)
    {
        for(int c=1;c<=n-1;c++)printf(" ");
        for(int b =n-1;b>=a;b--)
        {
            printf("#");
        }

    printf("\n");
    }
    return 0;
}

