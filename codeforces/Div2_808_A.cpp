#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        bool flag= true;
        for(int i =0; i<n; i++)
        {
            if(arr[i]%arr[0]==0)
            {
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
