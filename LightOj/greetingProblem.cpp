#include<iostream>
using namespace std;
int main()
{
    int t, i;
    long long a, b;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%lld%lld", &a, &b);
        printf("Case %d: %lld\n",i, a+b);

    }

    return 0;
}

