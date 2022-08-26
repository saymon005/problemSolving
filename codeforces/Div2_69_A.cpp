#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,xd = 0,yd = 0,zd = 0;
    cin>>n;
    ll x;
    ll y;
    ll z;
    for(int i = 0; i<n; i++)
    {
        cin>>x>>y>>z;
        xd += x;
        yd += y;
        zd += z;
    }
    if(xd == 0 && yd == 0 && zd == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
