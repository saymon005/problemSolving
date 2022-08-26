#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,n,x,cnt;
    cin>>n>>k;
    vector<ll>v;
    for(int tc=0;tc<n;tc++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    i=0;
    j=n-1;
    cnt=n;
    while(i<j)
    {
        if((v[i]+v[j])<=k)
        {
            cnt--;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
