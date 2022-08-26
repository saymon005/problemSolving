#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,r,a,b,c,t,tc=0;
    while(cin>>a>>b>>c && a!=0 && b!=0 && c!=0)
    {
        ll as = a*a;
        ll bs = b*b;
        ll cs = c*c;
        if((as+bs)==cs || (bs+cs)==as || (as+cs)==bs) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }

}

