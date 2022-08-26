#include<stdio.h>
int main()
{
    int t, res;
    scanf("%d", &t);
    while(t--)
    {
        int a,b;
        scanf("%d%d", &a, &b);
    if (a%b == 0)
    {
        res = 0;
        printf("%d\n", res);
    }
    else{
        res = b - (a%b);
        printf("%d\n", res);
    }


    }

    return 0;
}

