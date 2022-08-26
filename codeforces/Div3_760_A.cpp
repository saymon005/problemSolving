#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,b1,b2,b3,b4,b5,b6,b7;
    cin>>t;
    while(t--)
    {
        cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;
        if((b1+b2+b3) == b7)
        {
            cout<<b1<<" "<<b2<<" "<<b3<<endl;
        }
        else if((b1+b2+b4)==b7)
        {
            cout<<b1<<" "<<b2<<" "<<b4<<endl;
        }
        else if((b1+b3+b4)==b7)
        {
            cout<<b1<<" "<<b3<<" "<<b4<<endl;
        }
        else if((b2 + b3 + b4)==b7)
        {
            cout<<b2<<" "<<b3<<" "<<b4<<endl;
        }
    }
    return 0;
}
