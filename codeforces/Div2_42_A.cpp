#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<string> v;
    for(int i =0; i<n; i++)
    {
        string x;
        cin>>x;
        v.push_back(x);

    }
    string c= v[0];
    string c1;
    for(int i=0; i<n; i++)
    {
        if(v[i] !=c) c1= v[i];
    }

    if(count(v.begin(),v.end(), c) > count(v.begin(), v.end(), c1))
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<c1<<endl;
    }
    return 0;
}
