#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char a[1010] ;
    cin>>a;
    ll b=strlen(a);
    //cout<<a[b-1];
    for(ll i=0;i<1;i++)
    {
        cout<<a[b-1];
        for(ll j=0;j<b-1;j++)
        {
            cout<<a[j];
        }
        cout<<endl;
        for(ll j=2;j<b;j++)
        {
            cout<<a[j];
        }
        cout<<a[0]<<a[1];
    }
    return 0;
}
