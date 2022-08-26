#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k, req;
        scanf("%d%d", &n, &k);
        req = (k-1)/(n-1);
        printf("%d", k+req);
    }
    return 0;
}
