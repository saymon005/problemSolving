/*#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    int arr[50] = {0};
    scanf("%d", &t);
    for (int i=1; i<=t; i++)
    {
        scanf("%d", &n);
        if(n==0)
        {
            printf("0 0\n");
        }
        else if(n==20)
        {
            printf("10 10\n");
        }
        else if(n<11)
        {
            printf("%d %d\n", arr[n], abs(n-arr[n]));
            arr[n]++;
        }
        else{
                int m = 10- arr[n];
            printf("%d %d\n", m, abs(n-m));
            arr[n]++;
        }
    }

    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    scanf("%d", &t);
    for (int i=1; i<=t; i++)
    {
        scanf("%d", &n);
        if(n>10)
        {
            printf("%d %d\n", n-10, n-(n-10));
        }
        else{
            printf("0 %d\n", n);
        }
    }

    return 0;
}
