#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t>=1 && t<=100)
    {
        for(int i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        if(n>=1 && n<=100)
        {
            if(n==1 || n==2 || n==4 || n==5 || n==8 || n==11) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    }
}
