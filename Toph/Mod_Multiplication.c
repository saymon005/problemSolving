#include<stdio.h>
int main()
{
    int t;
    long long int a,b,c, d,r1,r2,r3, res;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
        r1 = (a*b)%c;
        r2 = (b*c)%a;
        if((c*a)%2== 0)
        {
            r3= 2 * (c*a) * (b / 2);
        }
        else
        {
            r3 = (c*a) + (c*a) * (b - 1);
        }
        //r3 = (c*a)%b;
        res = (r1*r2*r3)%d;

        printf("%lld", res);
    }
    return 0;
}
