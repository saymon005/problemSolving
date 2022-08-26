#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,r,a,b;
    while(cin>>a>>b && a!=0 && b!=0)
    {
        ll cnt=0;
        for(i=a;i<=b;i++)
        {
            r = sqrt(i);
            if(i==r*r)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}
