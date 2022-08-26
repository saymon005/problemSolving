#include<bits/stdc++.h>
#define ll       long long int
#define lu       unsigned long long int
#define pb       push_back
#define pf       push_front
#define mod      1000000007
#define MAX      10000007
#define fast     ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

void solve()
{
    ll n,i,j,k;
    cin>>n;
    ll run=pow(10,5);
    run=min(run,n);
    for(i=1;i<=run;i++){
        ll x=2*i;
        ll upore=n-x;
        if(upore<0) break;
        ll niche=(2+i);
        double d=(double)upore/niche;
        ll ans=ceil(d);
        //cout<<"asns=="<<ans<<endl;
        ll check=(2*ans)+(2*i)+(ans*i);
        if(check==n && ans!=0){
            cout<<"YES"<<endl; return ;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    fast;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
