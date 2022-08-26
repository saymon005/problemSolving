#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,k,m,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=n;j>i;j--)
        {
            cout<<"*";
        }

        cout<<endl;
    }

}

