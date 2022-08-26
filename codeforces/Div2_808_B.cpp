#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<ll>pref(n+2,0);
    vector<ll>suff(n+2,0);
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1];
        if(v[i]<v[i-1])
        {
            pref[i]+=(v[i-1]-v[i]);
        }
    }
    for(int i=n;i>=1;i--)
    {
        suff[i]=suff[i+1];
        if(v[i]<v[i+1])
        {
            suff[i]+=(v[i+1]-v[i]);
        }
    }
    while(m--)
    {
        ll i,j;
        cin>>i>>j;
        ll ans;
        if(i>j)
        {
           ans = suff[j]-suff[i];
        }
        else{
                ans = pref[j]-pref[i];

        }
         cout<<ans<<endl;
    }

    return 0;
}
