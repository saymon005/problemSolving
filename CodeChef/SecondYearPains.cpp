#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll x;
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        while(m--)
        {
            ll x;
            cin>>x;
            if(mp.find(x) != mp.end()) cout<<"YES\n";
            else{
                mp[x]++;
                cout<<"NO\n";
            }


        }

    }
    return 0;
}
