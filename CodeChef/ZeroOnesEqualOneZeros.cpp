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
        cout<<"1";
        for(int i=2;i<=n-1;i++)
        {
            cout<<"0";
        }
        cout<<"1"<<endl;
    }
    return 0;
}
