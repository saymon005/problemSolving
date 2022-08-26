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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<ll,ll>m;
        ll flag=0;
        for(auto u:v) m[u]++;
        for(auto u:m)
        {
            if((u.first)==0 && (u.second)%2==0) flag=1;
            else if((u.first)==1 && (u.second)%2==0) flag=1;
            else if((u.first)==1 && (u.second)%2==0 && (u.first)==0 && (u.second)%2==0) flag=1;
            else flag=0;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
