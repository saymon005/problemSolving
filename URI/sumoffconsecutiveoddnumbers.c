#include<stdio.h>

int main()
{
    int i, n, m, min, max, odd, sum = 0;

    scanf("%d%d", &n, &m);

    if(n<m)
    {
        min = n;
        max = m;
    }
    else
    {
        max = n;
        min = m;
    }

    for(i = (min+1); i < max; i++)
    {
        if(i%2 == 1 || i%2 == -1)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
