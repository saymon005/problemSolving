#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,ans,dif;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        if(n<=60)
        {
            dif = 60 - n;
            ans = dif + 100;
        }
        if(n>60 && n<=80)
        {
            dif = 2*(80 - n);
            ans = dif + 60;
        }
        if(n>80 && n<=100)
        {
            ans = 3*(100 - n);
        }
        cout<<ans<<" minutes"<<endl;
    }
}


