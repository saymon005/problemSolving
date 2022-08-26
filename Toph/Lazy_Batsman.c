#include <stdio.h>
int main ()
{
    long int T, N, i;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld",&N);
        if(N%2 == 0 && N > 2)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
