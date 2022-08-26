#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,r,a,b,t,tc=0;
    cin>>t;
    while(t--)
    {
        tc++;
        cin>>a>>b;
        ll sum=0;
        for(i=a;i<=b;i++)
        {
            if(i%2==1)
            {
                sum+=i;
            }
        }
        cout<<"Case "<<tc<<": "<<sum<<endl;
    }

}
