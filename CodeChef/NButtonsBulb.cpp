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
        string s,r;
        cin>>s>>r;
        ll cnt=0;
        for(int i=0; i<n;i++)
        {
            if(r[i]!=s[i]){
                cnt++;
            }
        }
        if(cnt%2==0) cout<<"1"<<endl;
        else cout<<"0"<<endl;






    }
    return 0;
}


