#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,sum=0,sum1=0;
    cin>>n;
    ll arr[n];
    for(int i=1;i<=n;i++) sum+=i;
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        sum1+=arr[i];
    }
    cout<<sum-sum1<<endl;
}

