#include<stdio.h>

    int main()
    {
    int a,b,c,t;
    scanf("%d", &t);
    while(t--)
    {
    scanf("%d %d",&a,&b);
    c =( a+b)/2;
    if(c%2 == 0)
        {
        printf("Sadia will be happy.\n");
        }
    else
    {
    printf("Oops!\n");
    }

    }

    return 0;
    }
