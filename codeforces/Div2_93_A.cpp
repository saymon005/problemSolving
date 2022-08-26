#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x,f=0,sum=0, arr[8];
    cin>>n;
    for(int i=1;i<=7; i++)
    {
        cin>>arr[i];
    }
    while(1)
    {
        for(int i=1;i<=7;i++)
        {
            sum+=arr[i];
            if(sum>=n)
            {
                cout<<i;
                f=1;
                break;
            }
        }
        if(f) break;
    }
    return 0;
}
