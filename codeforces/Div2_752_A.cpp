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
        ll ar[n];
        for(int i = 1; i<=n;i++)
        {
            cin>>ar[i];
        }
        ll ans = ar[1] - 1;
        ll indx = ans;
        for(int i = 2; i<=n;i++)
        {
            if(indx+i<ar[i])
            {
                ll x = ar[i] - (indx+i);
                indx+=x;
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
}
