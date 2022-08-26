#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count = 0;
        string s;
        cin>>s;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i]=='N')
            {
                count++;
            }
        }
        if(count == 1)
         cout<<"NO"<<endl;
         else
            cout<<"YES"<<endl;
    }

    return 0;
}
