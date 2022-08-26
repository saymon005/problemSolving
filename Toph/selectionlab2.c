#include<stdio.h>
unsigned long long int fact(unsigned long long int n)
{
    if (n == 0 || n == 1)
        return 1;
   else
        return n * fact(n - 1);
}
int main()
{
    unsigned long long int n, k, choice;
    scanf("%llu%llu", &n, &k);

    choice = fact(n)/(fact(n-k) * fact(k));

    printf("%llu", choice);

    return 0;
}

