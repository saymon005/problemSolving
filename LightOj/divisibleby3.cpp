#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll pre (ll n)
{
    ll ans;
    if(n==0) return 0;
    if(n%3==0)
    {
        ans = n/3;
    }
    else
    {
        ans = (n/3) + 1;
    }
    return n -ans;
}
int main()
{
    ll n, t, l, r;
    cin>>t;
    ll caseno = 0;
    while(t--)
    {
        caseno++;
        cin>>l>>r;
        ll res = pre(r) - pre(l-1);
        cout<<"Case "<<caseno<<":"<<" "<<res<<endl;

    }


    return 0;
}
