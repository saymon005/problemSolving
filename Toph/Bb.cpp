#include<bits/stdc++.h>
#define ll       long long int
#define lu       unsigned long long int
#define pb       push_back
#define fast     ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }

    map<int,int>mp;
    ll currsum=0,count=0;
    for(ll i=0; i<n; i++)
    {
        currsum+=a[i];
        ll r=(currsum%k+k)%k;
        if(r==0)count++;
        if(mp.find(r)!=mp.end()) count+=mp[r];
        mp[r]++;
    }
    cout<<count<<endl;
}
