#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,i;
    cin>>n>>m;
    ll mid;
    if(n%2==0)
    {
        mid = n/2;
    }
    else
    {
        mid = n/2 +1;
    }
    ll res;
    if(m<=mid)
    {
        res = (2*m)-1;
    }
    else{
            m=m-mid;
        res = 2*m;
    }
    cout<<res<<endl;

    return 0;
}
