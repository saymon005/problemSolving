#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d", &m, &n);
    int area = m*n;
    if(area%2 !=0){
        area = m*n -  1;
        area = (m*n)/2;
        printf("%d", area);
    }
    else{
            area = (m*n)/2;
        printf("%d",area);
    }

    return 0;
}
