#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==1) cout<<"-1"<<endl;
    else
    {
        vector<int>v;
        for(int i=1; i<=n; i++)
        {
            v.push_back(i);
        }
        for(int i=1; i<=n; i+=2)
        {
            swap(v[i],v[i-1]);
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
