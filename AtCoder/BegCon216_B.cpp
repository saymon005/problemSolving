#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n+5], t[n+5];
    for(int i =0; i<n; i++)
    {
        cin>>s[i];
        cin>>t[i];
    }

    for(int i = 0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(i!=j && s[i] == s[j] && t[i] == t[j])
            {
                cout<<"YES"<<endl;
            }
            //else
             //cout<<"NO"<<endl;
        }
        cout<<"NO"<<endl;

    }

    return 0;
}
