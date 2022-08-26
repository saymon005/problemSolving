#include<stdio.h>
int fact (int n)
{
    int i, mul = 1;
    for(i = 1; i<=n; i++)
    {
        mul = mul*i;
    }
    return mul;
}
int main()
{
    int n,i,j,r,t,ncr,s, result;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &s);

            while(s--)
            {
                scanf("%d", &r);
                n = 2*r;
                ncr = fact(n)/(fact(r)*fact(n-r));
                result = ncr/(r+1);

                printf("%d\n", result);

            }
    }

    return 0;
}
