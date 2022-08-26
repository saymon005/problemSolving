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
        char s[n];
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<n;i++)
        {
            if(s[i] == 'a' || s[i]=='e' || s[i] =='i' || s[i]=='o' || s[i]=='u'){
                cnt=0;
            }
            else{
                cnt++;
            }
            if(cnt==4) break;
        }
        if(cnt==4) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;






    }
    return 0;
}



