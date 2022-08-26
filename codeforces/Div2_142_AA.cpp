#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll s,n,x,y,f=0;
    cin>>s>>n;
    vector< pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size(); i++)
    {
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].first>=s)
        {
            f=1;
            break;

        }
        else{
            s+=v[i].second;
        }
    }
    if(f)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
