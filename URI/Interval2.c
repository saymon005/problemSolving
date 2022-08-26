#include<stdio.h>
int main()
{
    int n, in =0, out = 0;
    int x;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x>= 10 && x<= 20)
        {
            in ++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
