#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,ans;
    char c;
    cin>>t;
    while(t--)
    {
        ll cnt=0;
        char c;
        cin>>s;
        vector<string>v;
        for(int i=0;i<s.length(); i+=2)
        {
            if(s[i]=='1'){
                s.erase(1);
                cnt++;
                i++;
            }
        }
        cout<<cnt<<endl;
    }
}



