#include<stdio.h>
int main()
{
    int n,i, x=0;
    char arr[10];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", arr);
        if(arr[0] == '+')
            x++;
        if(arr[0] == '-')
            x--;
        if(arr[2] == '+')
            x++;
        if(arr[2] == '-')
            x--;
        printf("%d\n", x);
    }
    return 0;
}
