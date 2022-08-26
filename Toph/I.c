#include<stdio.h>
int F0 (int a, int b)
{
    return a*b;
}
int F1 (int l, int r)
{
    int a,b,c;
    if(l==r)
    {
      return r;
    }
     else{
        a = l;
        b = F1(l+1, r);
        c = F0(a,b);
        return c;
     }
}

int F2(int l, int r)
{
    int x,y,z,m;
    x = r-l+1;
    z = l;
    y = x-1;
    m = 2*z;

    return (x*(m+y)/2);
}
int main()
{
    int t;
    long int A, B, l, r;
    scanf("%d", &t);
    while(t--)
    {
       scanf("%ld%ld", &l, &r);
    A = F2(l,r);
    B = F1(l,r);

    if(A == B)
    {
        printf("-1\n");
    }
    else if (A>B)
    {
        printf("0\n");
    }
    else
        printf("1\n");
    }

}
