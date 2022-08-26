#include<stdio.h>

int main()
{
    int w, n, d;
    scanf("%d%d", &n, &d);

    w = n/d;
    n = n%d;
    printf("%d %d %d", w, n, d);

    return 0;
}
