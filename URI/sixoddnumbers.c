#include<stdio.h>

int main()
{
    int x, i, term = 6;
    scanf("%d", &x);
    for(i = x; i < (x +(term*2)); i+=2)
    {
        int odd;
        if(i%2 == 0)
        {
            odd = i + 1;
            printf("%d\n", odd);
        }
        else
        {
            odd = i;
            printf("%d\n", odd);
        }
    }

    return 0;
}

