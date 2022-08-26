#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll u,v,x,y;
        cin>>u>>v;
        x = u*u;
        y = v*v;
        x = -x;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
