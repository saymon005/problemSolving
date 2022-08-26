#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n; i++)
        {
            v[i] = i+1;
        }
        cout<<n<<endl;
        for(auto i: v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=n-1; i>=1; i--)
        {
            swap(v[i], v[i-1]);
            for(auto j: v)
            {
                cout<<j<<" ";
            }
             cout<<endl;
        }
    }
    return 0;
}
