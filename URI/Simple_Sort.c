#include<stdio.h>
int main()
{
    int n1, n2, n3, min, mid, max;
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1<n2 && n1<n3)
    {
        min = n1;
        if(n2<n3)
        {
            mid = n2;
            max = n3;
        }
        else{
            mid = n3;
            max = n2;
        }

    }
    else if(n2<n1 && n2<n3)
    {
        min = n2;
        if(n1<n3){
            mid = n1;
            max = n3;
        }
        else{
            mid = n3;
            max = n1;
        }
    }
    else{
        min = n3;
        if(n1<n2){
            mid = n1;
            max = n2;
        }
        else{
            mid = n2;
            max = n1;
        }
    }
    printf("%d\n%d\n%d\n", min, mid, max);
    printf("\n");
    printf("%d\n%d\n%d\n", n1, n2, n3);
    return 0;
}
