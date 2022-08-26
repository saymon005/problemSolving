#include<stdio.h>
int main()
{
    int a[20];
    int i, j, temp;
    for (i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }

    for(i= 0; i<4-1; i++){
        for (j = 0; j<4- i-1; j++){
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for(i = 0; i<4; i++)
    printf("%d", a[i+1]);
}
