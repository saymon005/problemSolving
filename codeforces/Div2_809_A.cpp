#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s ="";
        for(int i=0;i<m;i++)
        {
            s+='B';
        }

        for(int i=0;i<n;i++)
        {
            ll mins = min(v[i]-1, m-v[i]);
            ll maxs = max(v[i]-1, m-v[i]);
            if(s[mins]=='B')
            {
                s[mins]= 'A';
            }
            if(s[maxs]=='B')
            {
                s[maxs] = 'A';
            }
        }

        cout<<s<<endl;
    }
    return 0;
}

