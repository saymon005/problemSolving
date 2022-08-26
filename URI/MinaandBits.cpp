#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(i&1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}




