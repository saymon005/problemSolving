#include<bits/stdc++.h>
#define ll long long int
#define mod 1000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r,a,res;
        cin>>l>>r>>a;
        vector<ll>v;
        for(ll i = l; i<r; i++)
        {
            ll b = floor(i/3);
            res = (b+ i%a);
            v.push_back(res);
        }

        ll ans = *max_element(v.begin(),v.end());
        cout<<ans<<endl;
    }
    return 0;
}
