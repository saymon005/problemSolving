#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s;
    int t;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%c", &s);
    int l = s.length();

    if(l>10)
    {
        s = s.At(0)+""+ (s.length(l-2))+ s.At(l-1);
        printf("%c", s);
    }
    else{
        printf("%c", s);
    }

    }

}
