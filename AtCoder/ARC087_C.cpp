#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>cnt;
    for(int i = 1; i<=n; i++)
    {
        ll a;
        cin>>a;
        cnt[a]++;
    }

    ll ans=0;
    for(auto u:cnt)
    {
        if(u.second>=u.first) ans+=(u.second-u.first);
        else ans+=u.second;
    }
    cout<<ans<<endl;
    return 0;
}
