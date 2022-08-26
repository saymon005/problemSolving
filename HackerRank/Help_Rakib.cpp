#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i, n, num, sum;
    cin>>n;

    if(n%2 == 0)
    {
        num = n/2;
        sum = num*(n+1);
    }
    else
    {
        num = (n+1)/2;
        sum = num*n;
    }

    cout<<sum<<endl;

    return 0;
}
