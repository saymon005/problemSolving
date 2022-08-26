#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        map<ll,ll>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(auto u:v) m[u]++;

        for(auto u: m)
        {
            if((u.second)%2!=0) cout<<u.first<<endl;
            //break;
            //cout<<u.first<<" "<<u.second<<endl;
        }

    }
    return 0;
}
