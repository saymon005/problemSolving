#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x,y,z;
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        cin>>x>>y>>z;
         ll q = z*z;
         double p = sqrt(3);
         double area = (3*p)*q/2;
        if(x>y && area<=x)
        {
            cout<<"Case #"<<i<<": Eleven"<<endl;
        }
        else
        {
            cout<<"Case #"<<i<<": Demogorgon"<<endl;
        }
    }
    return 0;
}
