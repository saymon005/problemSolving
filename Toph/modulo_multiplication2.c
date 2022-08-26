#include<stdio.h>
long long r1(long long a, long long b, long long c)

    {
    long long res = 0;

    a %= c;

    while (b)
    {
        if (b & 1)
            res = (res + a) % c;

        a = (2 * a) % c;

        b >>= 1;
    }

    return res;
}
long long r2(long long b, long long c, long long a)

    {
    long long res1 = 0;

    b %= a;

    while (c)
    {
        if (c & 1)
            res1 = (res1 + b) % a;

        b = (2 * b) % a;

        c >>= 1;
    }

    return res1;
}
long long r3(long long c, long long a, long long b)

    {
    long long res2 = 0;

    c %= b;

    while (a)
    {
        if (a & 1)
            res2 = (res2 + c) % b;

        a = (2 * c) % b;

        a >>= 1;
    }

    return res2;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long a, b, c, d, result1, result2, result3, total_result;
        scanf("%lld%lld%lld%lld", &a, &b, &c);
        result1 = r1(a,b,c);
        result2 = r2(b,c,a);
        result3 = r3(c,a,b);
        total_result =(result1*result2*result3)%d;
        printf("%lld", total_result);
    }
    return 0;
}

